#include "../../build/Node.decl.h"
#include "Node.h"
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>


using namespace std;

Node::Node(string name,
	vector<CProxy_Node> dependencesVector,
	string command,
	int countDone,
	bool first) :
		m_name(name),
		m_dependencesVector(dependencesVector),
		m_command(command),
		m_countDone(countDone),
		m_first(first) {

}

Node::Node(CkMigrateMessage *msg) {
}


void Node::exec() {
	CkPrintf("Running \"exec Pere\"");
	if (m_dependencesVector.size()!=0){
		for (auto i : m_dependencesVector) {
			i.exec(thisProxy);
		}
	}else{
			execCommand();
	}
}

void Node::exec(CProxy_Node pereProxy) {
	m_pereProxy = pereProxy;
	CkPrintf("Running \"exec de fils\"");
	if (m_dependencesVector.size()!=0){
		for (auto i : m_dependencesVector) {
			i.exec(thisProxy);
		}
	}else{
			execCommand();
	}
}

void Node::execCommand() {
		system(m_command.c_str());
		if (m_first) {
			CkExit();
		}else{
			m_pereProxy.done();
		}
}

void Node::done() {
	m_countDone++;
	if (m_countDone >= m_dependencesVector.size()) {
			execCommand();
	}
}

void Node::displayNode() {
	cout << "Target : \n\t" << m_name << "\n";
	cout << "Dependences : \n";
	for (auto i : m_dependencesVector) {
		cout << "\t" << i.getName() << "\n";
	}
	cout << "Command : \n\t" << m_command << "\n\n";

}

#include "../../build/Node.def.h"
