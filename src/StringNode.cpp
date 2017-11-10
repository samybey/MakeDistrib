#include "StringNode.h"

using namespace std;

StringNode::StringNode(string name,
	vector<std::string> dependencesVector,
	string command) :
	m_name(name), m_dependencesVector(dependencesVector), m_command(command) {
}
