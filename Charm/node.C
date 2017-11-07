#include "main.def.h"
#include "main.decl.h"

#include "node.h"

using namespace std;
extern /* readonly */ CProxy_Main mainProxy;

Node::Node(string name, string command, vector<Node> dependancesVector)
m_name(name),
m_command(command),
m_dependancesVector(dependancesVector),
m_countDone = 0 {}

Node::Node(string name) m_name(name) {}

Node::Node(CkMigrateMessage *msg) {}


void Node::exec(CProxy_Node pereProxy){
    m_pereProxy = pereProxy;
	if(m_dependance.size() != 0){
		for(int i=0; i < m_dependance.size()){
			m_dependance[i].exec();
		}
	}
	else{
		execCommand();
	}
}

void Node::execCommand(){
	//Ici on exécute la commande Makefile
	pid_t pid;
	if((pid = fork()) > 0){
		execl("/bin/sh", "/bin/sh", "-c", m_commande, 0);
	}
	int status;
	waitpid(pid, &status, 0); // wait for child process, test.sh, to finish
	m_pereProxy.done();
}

void Node::done(){
	m_countDone++;
	//Sauvegarder le fichier sur la mémoire du proc
	if (m_countDone >= m_dependance.size()){
		execCommand();
	}
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
