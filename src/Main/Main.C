#include "../../build/Main.decl.h"
#include "Main.h"

using namespace std;
StringNode::StringNode(string name,
	vector<string> dependencesVector,
	string command) :
	m_name(name), m_dependencesVector(dependencesVector), m_command(command) {
}

Node::Node(string name, vector<string> dependencesVector, string command) :
	m_name(name), m_dependencesVector(dependencesVector), m_command(command) {
}

Node::Node(CkMigrateMessage *msg) {
}

void Node::exec(vector<StringNode> stringNodeVec) {
	CkPrintf("Coucou\n");
	m_isFirst = true;
	bool isADep;
	StringNode target;
	CProxy_Node childProxyNode;
	if (m_dependencesVector.size() != 0) {
		for (auto dep : m_dependencesVector) {
			isADep = false;
			target = {};
			for (auto targetStringNode : stringNodeVec) {
				if (dep == targetStringNode.getName()) {
					isADep = true;
					target = targetStringNode;
				}
			}
			if (isADep) {
				childProxyNode = CProxy_Node::ckNew(target.getName(),
					target.getDependencesVector(),
					target.getCommand());
				childProxyNode.exec(thisProxy, stringNodeVec);
			}
		}
	}
	execCommand();

}

void Node::exec(CProxy_Node pereProxy, vector<StringNode> stringNodeVec) {
	m_pereProxy = pereProxy;
	bool isADep;
	StringNode target;
	CProxy_Node childProxyNode;
	if (m_dependencesVector.size() != 0) {
		for (auto dep : m_dependencesVector) {
			isADep = false;
			target = {};
			for (auto targetStringNode : stringNodeVec) {
				if (dep == targetStringNode.getName()) {
					isADep = true;
					target = targetStringNode;
				}
			}
			if (isADep) {
				childProxyNode = CProxy_Node::ckNew(target.getName(),
					target.getDependencesVector(),
					target.getCommand());
				childProxyNode.exec(thisProxy, stringNodeVec);
			}
		}
	}
	execCommand();
}

void Node::execCommand() {
	system(m_command.c_str());
	if (m_isFirst) {
		CkExit();
	} else {
		m_pereProxy.done();
	}
}

void Node::done() {
	m_countDone++;
	if (m_countDone >= m_dependencesVector.size()) {
		execCommand();
	}
}

void Node::display() {
	CkPrintf("aaaa\n");
	CkPrintf((m_name + "\n").c_str());

}
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

	vector < StringNode > vecNodes = firstPass(nomMakefile);
	StringNode firstStringNode;
	firstStringNode = vecNodes.front();

	CProxy_Node firstNode = CProxy_Node::ckNew(firstStringNode.getName(),
		firstStringNode.getDependencesVector(), firstStringNode.getCommand());
	CkPrintf("après le std new\n");
	cout << vecNodes.size();
	for (vector<StringNode>::iterator i = vecNodes.begin(); i != vecNodes.end();
		++i) {
		CkPrintf((i->getName() + "\n").c_str());
	}

	firstNode.exec(vecNodes);

}

Main::Main(CkMigrateMessage* msg) {
}

void Main::done() {
	CkExit();
}

#include "../../build/Main.def.h"
