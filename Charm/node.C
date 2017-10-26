#include "node.decl.h"
#include "main.decl.h"
#include <string.h>
#include "node.h"


extern /* readonly */ CProxy_Main mainProxy;

Node::Node(String nom, String commande, Node dependance[]) {
  m_nom(nom);
  m_commande(commande);
  m_dependance(dependance);
  m_countDone = 0 {}

Node::Node(CkMigrateMessage *msg) {}

void Node::execCommand(){
    if(m_dependance.size != 0){
      for (int i =0; i< dependance.size(); i++){
        depFils = trouveDepFils(dependance[i]);

      }
    }
}

 Vector<Node> Node::trouveDepFils(Node fils){

}
void Node::creerNodeFils(){

}
void Node::done(){

}
