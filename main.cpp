#include <regex>
#include <iostream>

#include "readfile.cpp"

using namespace std;

int main (int argc, char* argv[]) {
     
     string makefile = parserfichier(argv[1]);
     smatch match;
     
     try{
	  regex reg ("(?:([\\w]+(?:.[\\w]+)?):(?: ([\\w. ]+))?\\n\\t([\\w. -_]+)(?:\\n|\\Z)+)", regex_constants::ECMAScript);
	  while (regex_search (makefile, match, reg)) {
	       for (auto x:match) 
		    cout << x << " ";
	       cout << endl;
	       makefile = match.suffix().str();
	  }
     } catch (const regex_error &e) {
	  cout << "error :" << "\n";
	  cout << e.what();
	  if (e.code() == regex_constants::error_brack) {
	       cout << "The code was error_brack\n";
	  }
     }
     return 0;
     
} 
