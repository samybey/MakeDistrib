#include "../../build/Main.decl.h"
#include "Main.h"

#include "../../build/Node.decl.h"
// Entry point of Charm++ application

using namespace std;

//=========================================================================================
//===================================STRINGNODE============================================
//=========================================================================================

StringNode::StringNode(string name, vector<string> dependencesVector,
		string command) :
		m_name(name),
		m_dependencesVector(dependencesVector),
		m_command(command) {}

//=========================================================================================
//=============================PARSER======================================================
//=========================================================================================

//Fonction qui retourne le contenu d'un fichier en string.
string parseFile(char* inputFile) {

	ifstream file(inputFile, ios::in);
	string makefile = "";

	if (file) {
		stringstream buffer;
		buffer << file.rdbuf();
		file.close();
		makefile = buffer.str();

		file.close();
	} else
		cerr << "Impossible d'ouvrir le fichier !" << endl;
	return makefile;
}

//fonction qui retourne la liste des commandes contenues dans le makefile
//En tant que vecteur de StringNode
vector<StringNode> firstPass(char* inputFile) {

	string makefile = parseFile(inputFile);
	smatch match;
	vector<StringNode> vec;

	string target;
	vector < string > dependencesVector;
	string command;

	int i;
	string dependence = "";
	string rest;

	try {
		//La regex ci dessous match 3 groupes : la cible, les dependences, et la commande
		//(cette dernière est très certainement incomplete, il manque surement des caractères à prendre en compte)
		regex reg(
				"(?:([\\w\\-]+(?:.[\\w\\-]+)?)(?:[ \\t])*:(?:[ \\t])*(?:(?:\\t| )([\\w. \\t\\-]+))?\\n(?:\\t)+([#\\w. \\-\\|<>';*/`=\\[\\]]+)(?:\\n|$)+)",
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
					break;
				default: //autre match => erreur
					break;
				}
				i++;
			}
			vec.push_back( { target, dependencesVector, command });
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

//Focntion d'initialisation de la map de chare des commandes du makefile
map<string, CProxy_Node> secondPassMapInit(vector<StringNode> firstPassVec) {
	map < string, CProxy_Node > secondPassMap;
	for (auto strNode : firstPassVec) {
		secondPassMap[strNode.getName()] = CProxy_Node::ckNew(strNode.getName(),
				{ }, strNode.getCommand());

	}
	return secondPassMap;
}

//Fonction qui retourne las liste des Chare correspondant aux dépendences d'une cible
vector<CProxy_Node> createNodeDep(vector<string> stringDepVec,
		map<string, CProxy_Node> secondPassMap) {
	vector < CProxy_Node > depNodeVec;
	if (!stringDepVec.empty()) {
		for (auto strDep : stringDepVec) {
			for (auto secondPassNodePair : secondPassMap) {
				if (strDep == secondPassNodePair.first) {
					depNodeVec.push_back(secondPassNodePair.second);
					break;
				}

			}
		}
	}
	return depNodeVec;
}


//Fonction qui set le vecteur de dépendence d'un chare Node
void setDependencesVector(CProxy_Node nodeProxy, vector<CProxy_Node> depVec) {
	for (auto dep : depVec) {
		nodeProxy.addDependence(dep);
	}
}


//fonction qui à partir du vecteur de StringNode des commandes,
//créé les Chares qui y correspondent et les stoque dans une Map
map<string, CProxy_Node> secondPass(vector<StringNode> firstPassVec) {
	//Initialisation du vec de node
	map < string, CProxy_Node > secondPassMap = secondPassMapInit(firstPassVec);
	vector < CProxy_Node > dependencesTemp;
	//ajout des dependences
	for (StringNode strNode : firstPassVec) {
		dependencesTemp.clear();
		dependencesTemp = createNodeDep(strNode.getDependencesVector(),
				secondPassMap);
		for (auto secondPassNodePair : secondPassMap) {
			if (strNode.getName() == secondPassNodePair.first) {
				setDependencesVector(secondPassNodePair.second,
						dependencesTemp);
				break;
			}
		}

	}
	return secondPassMap;

}

//=========================================================================================
//=============================MAIN========================================================
//=========================================================================================
Main::Main(CkArgMsg* msg) {

	//On stoque l'argument 1 de la commande contenant le fichier Makefile
	char* nomMakefile = msg->argv[1];

	delete msg;

	//On créé la map de Node correspondant a l'arbre de dépendences du makefile.
	map < string, CProxy_Node > nodesMap = secondPass(firstPass(nomMakefile));

	//On appelle la fonction exec du premier element du Makefile, qui appellera recursivement les fonctions exec
	//de ses dépendences avant d'exécuter la commande
	nodesMap.begin()->second.exec();

}

Main::Main(CkMigrateMessage* msg) {}

void Main::done() {
	CkExit();
}

#include "../../build/Main.def.h"
