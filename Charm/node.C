#include "node.decl.h"
#include "main.decl.h"
#include <string.h>
#include "node.h"


extern /* readonly */ CProxy_Main mainProxy;

Node::Node(String nom, String commande, Node dependance[], CProxy_Node pereProxy) {
    m_nom(nom);
    m_commande(commande);
    m_dependance(dependance);
    m_pereProxy(pereProxy)
    m_countDone = 0 {}

    Node::Node(CkMigrateMessage *msg) {}

    void Node::exec(){
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
