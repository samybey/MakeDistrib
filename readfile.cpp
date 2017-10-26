#include "readfile.h"

using namespace std;
 
string parserfichier(char* namefichier)
{
  
  ifstream fichier(namefichier, ios::in);  // on ouvre le fichier en lecture
  string makefile = "";

  if(fichier)  // si l'ouverture a réussi
    
    {       
      stringstream buffer; // variable contenant l'intégralité du fichier 
      // copier l'intégralité du fichier dans le buffer 
      buffer << fichier.rdbuf(); 
      // nous n'avons plus besoin du fichier ! 
      fichier.close(); 
      // manipulations du buffer... 
      /* << "Taille du buffer : " << buffer.str().size() << '\n'; */
      makefile = buffer.str();
      
      
      fichier.close(); 
    }
  else  // sinon
    cerr << "Impossible d'ouvrir le fichier !" << endl;
 
  return makefile;
}
