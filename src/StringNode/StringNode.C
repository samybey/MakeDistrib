#include "../../build/StringNode.decl.h"
#include "StringNode.h"

using namespace std;

StringNode::stringNode(std::string name,
	std::vector<std::string> dependencesVector,
	std::string command) :
	m_name(name), m_dependencesVector(dependencesVector), m_command(command) {
}

bool StringNode::deleteDependence(string dependence) {
	vector<string>::iterator it = find(m_dependencesVector.begin(),
		m_dependencesVector.end(), dependence);

	if (it == m_dependencesVector.end())
		return false;

	m_dependencesVector.erase(it);
	return true;
}

void StringNode::displayNode() {
	cout << "Target : \n\t" << m_name << "\n";
	cout << "Dependences : \n";
	for (auto i : m_dependencesVector) {
		cout << "\t" << i << "\n";
	}
	cout << "Command : \n\t" << m_command << "\n\n";
}
#include "../../build/StringNode.def.h"
