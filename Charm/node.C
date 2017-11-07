#include "node.decl.h"
#include "main.decl.h"
#include <string.h>
#include "node.h"


extern /* readonly */ CProxy_Main mainProxy;

Node::Node(std::string name, std::string command, vector<Node> dependances, integer countDone) {
  m_name(name);
  m_command(command);
  m_dependances(dependances);
  m_countDone = countDone {}

Node::Node(CkMigrateMessage *msg) {}

void Node::execCommand(){
    if(m_dependance.size != 0){
      for (int i =0; i< dependance.size(); i++){
        depFils = trouveDepFils(dependance[i]);

      }
    }
}

void Node::done(){

}

bool Node::deleteDependence(Node dependence){
	vector<Node>::iterator it = find(m_dependencesVector.begin(), m_dependencesVector.end(), dependence);

	if (it == m_dependencesVector.end())
		return false;

	m_dependencesVector.erase(it);
	return true;
}


void Node::displayNode() {
	cout << "Target : \n\t" << m_target << "\n";
	cout << "Dependences : \n";
	for(auto i : m_dependencesVector) {
	    cout << "\t" << i.getName() << "\n";
	}
	cout << "Command : \n\t" << m_command << "\n\n";
}
