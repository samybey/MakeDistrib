#include "Node.h"

using namespace std;

Node::Node(std::string target, std::vector<std::string> dependencesVector, std::string command):
m_target(target),
m_dependencesVector(dependencesVector),
m_command(command) {}


bool Node::deleteDependence(string dependence){
	vector<string>::iterator it = find(m_dependencesVector.begin(), m_dependencesVector.end(), dependence);

	if (it == m_dependencesVector.end())
		return false;

	m_dependencesVector.erase(it);
	return true;
}


void Node::displayNode() {
	cout << "Target : \n\t" << m_target << "\n";
	cout << "Dependences : \n";
	for(auto i : m_dependencesVector) {
	    cout << "\t" << i << "\n";
	}
	cout << "Command : \n\t" << m_command << "\n\n";
}