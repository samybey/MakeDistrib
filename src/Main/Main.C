#include "../../build/Main.decl.h"
#include "Main.h"

#include "../../build/Node.decl.h"
#include "../../build/Parser.decl.h"

using namespace std;

/* readonly */ //CProxy_Main mainProxy;
/* readonly */int numElements;

// Entry point of Charm++ application
Main::Main(CkArgMsg* msg) {

	// There should be 0 or 1 command line arguments.
	// If there is one, it is the number of "Hello"
	// chares that should be created.
	/******* NOTE: Parser le Makefile ************/

	delete msg;


	CkPrintf("Running \"MakeParallele\"");


	//mainProxy = thisProxy;

	/******* NOTE: listNodes[1].exec(thisProxy); **********/
	CProxy_Node helloo  = CProxy_Node::ckNew("hello.o", {}, "gcc -o hello/hello.o -c hello/hello.c -W -Wall -ansi -pedantic");


	CProxy_Node maino = CProxy_Node::ckNew("main.o", {}, "gcc -o hello/main.o -c hello/main.c -W -Wall -ansi -pedantic");
	/*std::vector<CProxy_Node> dependencesVector;
	dependencesVector.push_back(fils1);
	dependencesVector.push_back(fils2);*/


	CProxy_Node hello = CProxy_Node::ckNew("hello", {helloo, maino}, "gcc -o hello/hello hello/hello.o hello/main.o");
	hello.setFirst();
	hello.exec();
}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Main::Main(CkMigrateMessage* msg) {
}

// When called, the "done()" entry method will cause the program
// to exit.
void Main::done() {
  CkExit();
}

#include "../../build/Main.def.h"
