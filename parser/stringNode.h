#ifndef STRINGNODE_INCLUDE
#define STRINGNODE_INCLUDE

#include <string>

class stringNode {

public:
	stringNode(std::string name, std::vector<std::string> dependencesVector, std::string command);
	~stringNode(){m_dependencesVector.clear();}

	std::string getName() { return m_name; }

	std::vector<std::string> getDependencesVector() { return m_dependencesVector; }

	std::string getCommand() { return m_command; }

	bool deleteDependence(std::string dependence) ;

	void displayNode ();

private:
	std::string m_name;

	std::vector<std::string> m_dependencesVector;

	std::string m_command;
};

#endif
