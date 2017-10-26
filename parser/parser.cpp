#include <regex>
#include <iostream>

#include "readFile.cpp"
#include "Node.cpp"

using namespace std;

vector<Node> parseMakefile (char* input) {

	string makefile = parseFile(input);
	smatch match;
	vector<Node> vec;

	string target;
	vector<string> dependencesVector;
	string command;

	int i;
	string dependence = "";
	string rest;

	try{
		regex reg ("(?:([\\w]+(?:.[\\w]+)?):(?: ([\\w. ]+))?\\n\\t([\\w. -_]+)(?:\\n|$)+)", regex_constants::ECMAScript);
		while (regex_search (makefile, match, reg)) {
			i = 0;
			target = "";
			dependencesVector.clear();
			dependence = "";
			command = "";

			for (auto x:match) {
				switch (i) {
				case 0: //match global
					break;
				case 1: //cible
					target = x;
					break;
				case 2: //dependences
					rest = x.str();
					dependence = rest.substr(0, rest.find(" "));
					while (dependence != rest) {
						dependencesVector.push_back(dependence);
						rest = rest.substr(rest.find(" ") + 1, rest.size()-1);
						dependence = rest.substr(0, rest.find(" "));

					}
					 dependencesVector.push_back(rest);
					break;
				case 3: //commande
					command = x;
				default: //autre match => erreur
					break;
				}
				i++;
			}
			vec.push_back({target,dependencesVector, command});
			makefile = match.suffix().str();
		}
	} catch (const regex_error &e) {
		cout << "error :" << "\n";
		cout << e.what();
		if (e.code() == regex_constants::error_brack) {
			cout << "The code was error_brack\n";
		}
	}
	return vec;

} 
