#ifndef __NODE_H__
#define __NODE_H__

#include <string>

class Node : public CBase_Node {

  public:

  /// Constructors ///
    Node(String nom, String commande, Node dependance[]);

    /// Entry Methods ///
    void exec();
    void execCommand(String command);
    void trouveDepFils(Node fils);
    void done(FILE inputFile);

  private:
    String m_nom;
    String m_commande;
    Node m_dependance [];
    int m_countDone;
    CProxy_Node m_pereProxy;
};

#endif //__NODE_H__
