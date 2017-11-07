#include "parser.h"

using namespace std;

string parseFile(char* inputFile)
{

	ifstream file(inputFile, ios::in);  // on ouvre le fichier en lecture
	string makefile = "";

	if(file)  // si l'ouverture a réussi

	{
		stringstream buffer; // variable contenant l'intégralité du fichier
		// copier l'intégralité du fichier dans le buffer
		buffer << file.rdbuf();
		// nous n'avons plus besoin du fichier !
		file.close();
		// manipulations du buffer...
		/* << "Taille du buffer : " << buffer.str().size() << '\n'; */
		makefile = buffer.str();


		file.close();
	}
	else  // sinon
		cerr << "Impossible d'ouvrir le fichier !" << endl;

	return makefile;
}


vector<Node> parseMakefile (char* inputFile) {

	string makefile = parseFile(inputFile);
	smatch match;
	vector<Node> vec;

	string target;
	vector<Node> dependencesVector;
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
						dependencesVector.push_back( {dependence} );
						rest = rest.substr(rest.find(" ") + 1, rest.size()-1);
						dependence = rest.substr(0, rest.find(" "));

					}
					dependencesVector.push_back( {rest} );
					break;
				case 3: //commande
					command = x;
				default: //autre match => erreur
					break;
				}
				i++;
			}
			vec.push_back( {target, command, dependencesVector} );
			makefile = match.suffix().str();
		}
	} catch (const regex_error &e) {
		cout << "error :" << "\n";
		cout << e.what();
		if (e.code() == regex_constants::error_brack) {
			cout << "The code was error_brack\n";
		}
	}

	//Vec est le vecteur de node bien faits
	return vec;
	//return createNodeSharedVector(vec);
} 
