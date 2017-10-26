#include <string>
#include "Node.h"

Node::Node(std::string target, std::vector<std::string> dependencesVector, std::string command):
m_target(target),
m_dependencesVector(dependencesVector),
m_command(command) {}


bool Node::deleteDependence(std::string dependence){
	vector<string>::iterator result = find(m_dependencesVector.begin(), m_dependencesVector.end(), dependence);

	if (result == m_dependencesVector.end())
		return false;

	m_dependencesVector.erase(result);
	return true;
}
