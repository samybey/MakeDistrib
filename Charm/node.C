#include "node.decl.h"
#include "node.h"


using namespace std;

Node::Node(string name, vector<CProxy_Node> dependencesVector, string command,  int countDone) :
		m_name(name), m_dependencesVector(
				dependencesVector), m_command(
				command), m_countDone(countDone) {
}

Node::Node(CkMigrateMessage *msg) {
}

void Node::exec(CProxy_Node pereProxy) {
	m_pereProxy = pereProxy;
	for (auto i : m_dependencesVector) {
		i.exec(thisProxy);
	}
	execCommand();
}

void Node::execCommand() {
//Ici on exécute la commande Makefile
	/*pid_t pid;
	if ((pid = fork()) > 0) {
		execl("/bin/sh", "/bin/sh", "-c", m_command, 0);
	}
	int status;
	waitpid(pid, &status, 0); // wait for child process, test.sh, to finish
	m_pereProxy.done();*/
}

void Node::done() {
	m_countDone++;
//Sauvegarder le fichier sur la mémoire du proc
	if (m_countDone >= m_dependencesVector.size()) {
		execCommand();
	}
}


void Node::displayNode() {
	cout << "Target : \n\t" << m_name << "\n";
	cout << "Dependences : \n";
	for (auto i : m_dependencesVector) {
		cout << "\t" << i.getName() << "\n";
	}
	cout << "Command : \n\t" << m_command << "\n\n";

}



#include "node.def.h"
