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
	CProxy_Node fils11 = CProxy_Node::ckNew("fils11", {}, "echo \"Hello world fils 11\"");
	CProxy_Node fils1 = CProxy_Node::ckNew("fils1", {fils11}, "echo \"Hello world fils 1\"");


	CProxy_Node fils2 = CProxy_Node::ckNew("fils2", {}, "echo \"Hello world fils 2\"");
	/*std::vector<CProxy_Node> dependencesVector;
	dependencesVector.push_back(fils1);
	dependencesVector.push_back(fils2);*/


	CProxy_Node nodeInit = CProxy_Node::ckNew("bill", {fils1, fils2}, "echo \"Hello world padre\"");
	nodeInit.setFirst();
	nodeInit.exec();
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
