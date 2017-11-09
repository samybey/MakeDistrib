std::hash<std::string> str_hash;
string nomFichier = str_hash(m_commande);

ofstream fichier(nomFichier, ios::out | ios::trunc);  //déclaration du flux et ouverture du  fichier
if(fichier)  // si l'ouverture a réussi
  {
    fichier << m_commande << endl;
    // instructions
    fichier.close();  // on referme le fichier
  }else{  // sinon
    cerr << "Erreur à l'ouverture !" << endl;
  }
system("./" + nomFichier + ".sh");
