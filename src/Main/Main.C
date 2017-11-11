#include "../Node/Node.h"
#include "../../build/Main.decl.h"
#include "Main.h"

#include "../../build/Node.decl.h"

using namespace std;

//========================================================================================
//===================================    PARSER   ========================================
//========================================================================================

string parseFile(char* inputFile) {

	ifstream file("test/Makefile", ios::in);  // on ouvre le fichier en lecture
	string makefile = "";

	if (file)  // si l'ouverture a réussi

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
	} else
		// sinon
		cerr << "Impossible d'ouvrir le fichier !" << endl;
	return makefile;
}

vector<StringNode> firstPass(char* inputFile) {

	string makefile = parseFile(inputFile);
	smatch match;
	vector < StringNode > vec;

	string target;
	vector < string > dependencesVector;
	string command;

	int i;
	string dependence = "";
	string rest;

	try {
		regex reg(
			"(?:([\\w]+(?:.[\\w]+)?):(?: ([\\w. ]+))?\\n\\t([\\w. -_]+)(?:\\n|$)+)",
			regex_constants::ECMAScript);
		while (regex_search(makefile, match, reg)) {
			i = 0;
			target = "";
			dependencesVector.clear();
			dependence = "";
			command = "";

			for (auto x : match) {
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
						rest = rest.substr(rest.find(" ") + 1, rest.size() - 1);
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
			vec.push_back({target, dependencesVector, command});
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

//========================================================================================
//====================================    MAIN   =========================================
//========================================================================================


// Entry point of Charm++ application
Main::Main(CkArgMsg* msg) {

	char* nomMakefile = msg->argv[1];

	delete msg;

	std::vector < StringNode > vecNodes = firstPass(nomMakefile);
	CProxy_Node first = CProxy_Node::ckNew();
	first.fistExec();

}

Main::Main(CkMigrateMessage* msg) {
}

void Main::done() {
	CkExit();
}

#include "../../build/Main.def.h"
