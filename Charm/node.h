#ifndef __NODE_H__
#define __NODE_H__

class Node : public CBase_Node {

  private:
    String nom;
    String commande;
    Node dependance [];
    int countDone;
    //proxy?

  public:

  /// Constructors ///
    Node(String nom, String commande, Node dependance[]);

    /// Entry Methods ///
    void execCommand(String command);
    void trouveDepFils(Node fils);
    void creerNodeFils();
    void done();
};

#endif //__NODE_H__
