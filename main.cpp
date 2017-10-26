#include <regex>
#include <iostream>

#include "readfile.cpp"

using namespace std;

int main (int argc, char* argv[]) {

	string makefile = parserfichier(argv[1]);
	smatch match;

	try{
		regex reg ("(?:([\\w]+(?:.[\\w]+)?):(?: ([\\w. ]+))?\\n\\t([\\w. -_]+)(?:\\n|$)+)", regex_constants::ECMAScript);
		while (regex_search (makefile, match, reg)) {
			int i = 0;
			string dependence;
			string reste;
			for (auto x:match) {
				i++;
				switch (i) {
				case 1:
					break;
				case 2:
					cout << x << "\n";
					break;
				case 3:
					reste = x.str();
					dependence = reste.substr(0, reste.find(" "));
					while (dependence != reste) {
						cout << dependence << "\n";
						reste = reste.substr(reste.find(" ") + 1, reste.size()-1);
						dependence = reste.substr(0, reste.find(" "));

					}
					 cout << reste << "\n";
					break;
				case 4:
					cout << x << "\n";
				default:
					break;
				}
			}
			cout << endl;
			makefile = match.suffix().str();
		}
	} catch (const regex_error &e) {
		cout << "error :" << "\n";
		cout << e.what();
		if (e.code() == regex_constants::error_brack) {
			cout << "The code was error_brack\n";
		}
	}
	return 0;

} 
