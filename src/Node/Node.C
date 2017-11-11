#include "Node.h"

using namespace std;

StringNode::StringNode(std::string name,
	std::vector<std::string> dependencesVector,
	std::string command) :
	m_name(name), m_dependencesVector(dependencesVector), m_command(command) {
}

Node::Node(string name,
	vector<StringNode> stringNodeVec,
	vector<string> dependencesVector,
	string command,
	int countDone) :
		m_name(name),
		m_stringNodeVec(stringNodeVec),
		m_dependencesVector(dependencesVector),
		m_command(command),
		m_countDone(countDone) {
}

Node::Node(CkMigrateMessage *msg) {
}
void Node::firstExec() {

}

void Node::exec(CProxy_Node pereProxy) {
}

void Node::execCommand() {

}

void Node::done() {
}


#include "../../build/Node.def.h"
