#include "../../build/Main.decl.h"
#include "Main.h"

#include "../../build/Node.decl.h"
// Entry point of Charm++ application

using namespace std;

//=========================================================================================
//===================================STRINGNODE============================================
//=========================================================================================

StringNode::StringNode(string name,
	vector<string> dependencesVector,
	string command) :
	m_name(name), m_dependencesVector(dependencesVector), m_command(command) {
}

//=========================================================================================
//=============================PARSER======================================================
//=========================================================================================

string parseFile(char* inputFile) {

	ifstream file(inputFile, ios::in);  // on ouvre le fichier en lecture
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
	vector<StringNode> vec;

	string target;
	vector < string > dependencesVector;
	string command;

	int i;
	string dependence = "";
	string rest;

	try {
		regex reg(
		     "(?:([\\w]+(?:.[\\w]+)?):(?:(?:\\t| )([\\w. ]+))?\\n\\t([^\\n]+)(?:\\n|$)+)",
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

	/*for (CProxy_StringNode i : vec) {

	 CkPrintf(i.getName().c_str());
	 }*/
	//Vec est le vecteur de node bien faits
	return vec;
	//return createNodeSharedVector(vec);
}
map<string, CProxy_Node> secondPassMapInit(vector<StringNode> firstPassVec) {
	map < string, CProxy_Node > secondPassMap;
	for (auto strNode : firstPassVec) {
		secondPassMap[strNode.getName()] = CProxy_Node::ckNew(strNode.getName(),
			{}, strNode.getCommand());

	}
	return secondPassMap;
}

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

void setDependencesVector(CProxy_Node nodeProxy, vector<CProxy_Node> depVec){
	for (auto dep : depVec){
		nodeProxy.addDependence(dep);
	}
}

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
		 		setDependencesVector(secondPassNodePair.second,dependencesTemp);
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

	char* nomMakefile = msg->argv[1];

	delete msg;

	map < string, CProxy_Node > nodesMap = secondPass(firstPass(nomMakefile));

	nodesMap.begin()->second.exec();

}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Main::Main(CkMigrateMessage* msg) {
}

// When called, the "done()" entry method will cause the program
// to exit.
void Main::done() {
	CkExit();
}

#include "../../build/Main.def.h"
