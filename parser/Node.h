#ifndef NODE_INCLUDE
#define NODE_INCLUDE

#include <string>

class Node {

public:
	Node(std::string target, std::vector<std::string> dependencesVector, std::string command);
	~Node(){m_dependencesVector.clear();}

	std::string getTarget() { return m_target; }

	std::vector<std::string> getDependencesVector() { return m_dependencesVector; }

	std::string getCommand() { return m_command; }

	bool deleteDependence(std::string dependence) ;

	void displayNode ();

private:
	std::string m_target;

	std::vector<std::string> m_dependencesVector;

	std::string m_command;
};

#endif
