#ifndef __NODE_H__
#define __NODE_H__

#include <string>
#include <iostream>

class Node : public CBase_Node {

public:
	/// Constructors ///
	Node(std::string name, std::string command, std::vector<Node> dependancesVector, int countDone = 0);
	Node(std::string name);
	Node(CkMigrateMessage *msg);
	~Node(){ m_dependencesVector.clear(); }

	std::string getName() { return m_name; }

	std::vector<Node> getdependencesVector() { return m_dependencesVector; }

	std::string getCommand() { return m_command; }

	bool deleteDependence(Node dependence);

	void displayNode ();

	/// Entry Methods ///
	void exec();
	void execCommand();
	void done();

private:
	std::string m_name;
	std::string m_command;
	std::vector<Node> m_dependencesVector;
	int m_countDone;
	CProxy_Node m_pereProxy;
};
#endif //__NODE_H__
