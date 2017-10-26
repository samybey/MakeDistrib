#include "readFile.h"

using namespace std;
 
string parserFile(char* fileName)
{
  
  ifstream file(fileName, ios::in);  // on ouvre le fichier en lecture
  string makefile = "";

  if(file)  // si l'ouverture a réussi
    
    {       
      stringstream buffer; // variable contenant l'intégralité du fichier 
      // copier l'intégralité du fichier dans le buffer 
      buffer << file.rdbuf();
      // nous n'avons plus besoin du fichier ! 
      file.close();
      // manipulations du buffer... 
      /* << "Taille du buffer : " << buffer.str().size() << '\n'; */
      makefile = buffer.str();
      
      
      file.close();
    }
  else  // sinon
    cerr << "Impossible d'ouvrir le fichier !" << endl;
 
  return makefile;
}
