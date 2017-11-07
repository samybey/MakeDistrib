#ifndef __NODE_H__
#define __NODE_H__

#include <string>

class Node : public CBase_Node {



  public:

  /// Constructors ///
    Node(String name, String command = "" , vector<Node> dependancesVector = {} , integer countDone = 0);
	~Node(){ m_dependencesVector.clear(); }

	std::string getName() { return m_name; }

	std::vector<std::string> getDependencesVector() { return m_dependencesVector; }

	std::string getCommand() { return m_command; }

	bool deleteDependence(Node dependence) ;

	void displayNode ();

    /// Entry Methods ///
    void execCommand(String command);
    void done();

  private:
    String m_name;
    String m_command;
    vector<Node> m_dependancesVector;
    int m_countDone;
    CProxy_Node m_pereProxy;
    //proxy?
};

#endif //__NODE_H__
