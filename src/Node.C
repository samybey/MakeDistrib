#include "Node.h"

using namespace std;

Node::Node(string name,
	vector<CProxy_Node> dependencesVector,
	string command,
	int countDone) :
		m_name(name),
		m_dependencesVector(dependencesVector),
		m_command(command),
		m_countDone(countDone) {
}

Node::Node(CkMigrateMessage *msg) {
}

int_message* Node::isGoodName(string name) {
	int ok = (name == m_name) ? 1 : 0;
	return new int_message(ok);
}

void Node::exec(vector<string> dependencesVector,
	vector<StringNode> stringVec) {
	CkPrintf("Running \"exec Pere\"");
	StringNode depNode = {"", {}, ""};
	CProxy_Node fils;
	vector < string > depFils;
	bool isADep;
	if (dependencesVector.size() != 0) {
		for (auto i : dependencesVector) {
			isADep = false;
			for (auto k : stringVec) {
				if (k.getName() == i) {
					isADep = true;
					depNode = k;
					depFils = k.getDependencesVector();
				}
			}
			if (isADep) {
				fils = CProxy_Node::ckNew(depNode.getName(), {},
					depNode.getCommand());
				fils.exec(thisProxy, depFils, stringVec);
			}
			depNode = {"", {}, ""};
			depFils.clear();
		}
	} else {
		execCommand();
	}
}

void Node::exec(CProxy_Node pereProxy,
	std::vector<std::string> dependencesVector,
	std::vector<StringNode> stringVec) {
	m_pereProxy = pereProxy;
	bool isADep;
	CProxy_Node fils;
	vector < string > depFils;
	StringNode depNode = {"", {}, ""};
	CkPrintf("Running \"exec de fils\"");
	if (dependencesVector.size() != 0) {
		for (auto i : dependencesVector) {
			isADep = false;
			for (auto k : stringVec) {
				if (k.getName() == i) {
					isADep = true;
					depNode = k;
				}
			}
			if (isADep) {
				fils = CProxy_Node::ckNew(depNode.getName(), {},
					depNode.getCommand());
				fils.exec(thisProxy, depFils, stringVec);
			}
			depNode = {"", {}, ""};
			depFils.clear();
		}
	} else {
		execCommand();
	}
}

void Node::execCommand() {
	system(m_command.c_str());
	if (m_first) {
		CkExit();
	} else {
		m_pereProxy.done();
	}
}

void Node::done() {
	m_countDone++;
//Sauvegarder le fichier sur la mémoire du proc
	if (m_countDone >= m_dependencesVector.size()) {
		execCommand();
	}
}

#include "Node.def.h"
