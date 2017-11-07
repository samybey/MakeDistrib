#include "node.decl.h"
#include "main.decl.h"

#include "node.h"

using namespace std;
extern/* readonly */CProxy_Main mainProxy;

Node::Node(string name, string command, vector<Node> dependencesVector, int countDone) :
		m_name(name), m_command(command), m_dependencesVector(
				dependencesVector), m_countDone(
				countDone) {
}

Node::Node(string name) :
		m_name(name) {
}

Node::Node(CkMigrateMessage *msg) {
}

void Node::exec() {
	if (m_dependencesVector.size() != 0) { // TODO : ne pas executer plusieurs fois la meme commande (trouver un moyen de supprimer le node apres l'avoir executé)
		for (auto i : m_dependencesVector) {
			if(true) { // TODO : si c'est une cible
				i.exec();
			}
		}
	} else {
		execCommand();
	}
}

void Node::execCommand() {
//Ici on exécute la commande Makefile
	/*pid_t pid;
	if ((pid = fork()) > 0) {
		execl("/bin/sh", "/bin/sh", "-c", m_command, 0);
	}
	int status;
	waitpid(pid, &status, 0); // wait for child process, test.sh, to finish
	*/
	m_pereProxy.done();
}

void Node::done() {
	m_countDone++;
//Sauvegarder le fichier sur la mémoire du proc
	if (m_countDone >= m_dependencesVector.size()) {
		execCommand();
	}
}

bool Node::deleteDependence(Node dependence) {
	/*vector<Node>::iterator it = find(m_dependencesVector.begin(), m_dependencesVector.end(), dependence);

	if (it == m_dependencesVector.end())
		return false;

	m_dependencesVector.erase(it);*/
	return true;
}

void Node::displayNode() {
	cout << "Target : \n\t" << m_name << "\n";
	cout << "Dependences : \n";
	for (auto i : m_dependencesVector) {
		cout << "\t" << i.getName() << "\n";
	}
	cout << "Command : \n\t" << m_command << "\n\n";

}
