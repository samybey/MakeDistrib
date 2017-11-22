#include "Node.h"
using namespace std;

//Constructeur du Node
Node::Node(string name, vector<CProxy_Node> dependencesVector, string command,
		int countDone) :
		m_name(name),
		m_dependencesVector(dependencesVector),
		m_command(command),
		m_countDone(countDone) {}

Node::Node(CkMigrateMessage *msg) {}


void Node::exec() {
	m_first = true;
	if (m_dependencesVector.size() != 0) {
		for (auto i : m_dependencesVector) {
			i.exec(thisProxy);
		}
	} else {
		execCommand();
	}
}

void Node::exec(CProxy_Node pereProxy) {
	m_pereProxy = pereProxy;
	if (m_dependencesVector.size() != 0) {
		for (auto i : m_dependencesVector) {
			i.exec(thisProxy);
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
	if (m_countDone >= m_dependencesVector.size()) {
		execCommand();
	}
}

void Node::addDependence(CProxy_Node dep) {
	m_dependencesVector.push_back(dep);
}

#include "../../build/Node.def.h"
