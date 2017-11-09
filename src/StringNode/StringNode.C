#include "../../build/StringNode.decl.h"
#include "StringNode.h"

using namespace std;

StringNode::StringNode(std::string name,
	std::vector<std::string> dependencesVector,
	std::string command) :
	m_name(name), m_dependencesVector(dependencesVector), m_command(command) {
}
#include "../../build/StringNode.def.h"
