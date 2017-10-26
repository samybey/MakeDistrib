#include "node.decl.h"

#include "node.h"
#include "main.decl.h"

extern /* readonly */ CProxy_Main mainProxy;
class Node
{
  Node(String nom, String commande, Node dependance[]) {

  }
  
  Node(CkMigrateMessage *msg) { }

  void trouveDepFils(Node fils){

  }
  void creerNodeFils(){

  }
  void done(){

  }
};
