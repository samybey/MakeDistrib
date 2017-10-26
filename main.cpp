#include <regex>
#include <iostream>
#include "readfile.h"


using namespace std;

int main (int argc, char *argv[]) {

     const regex reg ("(?:([\\w]+(?:.[\\w]+)?):(?: ([\\w. ]+))?\\n\\t([\\w. -_]+)(?:\\n|\\Z)+)");


     string makefile = parserfichier(argv[1]);
     std::cmatch cm;  
     std::regex_match (makefile, cm, reg);
     std::cout << "string literal with " << cm.size() << " matches\n";
     
} 
