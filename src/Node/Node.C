#include "Node.h"

using namespace std;

Node::Node(string name,
	vector<CProxy_Node> dependencesVector,
	string command,
	int countDone) :
		m_name(name),
		m_dependencesVector(dependencesVector),
		m_command(command),
		m_countDone(countDone) {
}

Node::Node(CkMigrateMessage *msg) {
}

int_message * Node::isGoodName(string name) {
	int ok = (name == m_name) ? 1 : 0;
	return new int_message(ok);
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


#include "../../build/Node.def.h"
