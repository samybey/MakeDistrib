#include "main.decl.h"
#include "main.h"

#include "Node.decl.h"
#include "../parser/parser.cpp"


/* readonly */ //CProxy_Main mainProxy;
/* readonly */ int numElements;

// Entry point of Charm++ application
Main::Main(CkArgMsg* msg) {

  // There should be 0 or 1 command line arguments.
  // If there is one, it is the number of "Hello"
  // chares that should be created.

  // We are done with msg so delete it.
  delete msg;

  // Display some info about this execution
  // for the user.
  //CkPrintf("Running \"MakeParallele\"");

  // Set the mainProxy readonly to point to a
  // proxy for the Main chare object (this
  // chare object).
  //mainProxy = thisProxy;

  // Create the array of Hello chare objects. NOTE: The
  // 'helloArray' object that is returned by 'ckNew()' is
  // actually a Proxy object to the array.
  // CProxy_Node nodeInit = CProxy_Node::ckNew(1); //changer paramètres




  /******* NOTE: Parser le Makefile ************/
  /******* NOTE: listNodes[1].exec(thisProxy); **********/
}

// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Main::Main(CkMigrateMessage* msg) { }

// When called, the "done()" entry method will cause the program
// to exit.
void Main::done() {
  CkExit();
}

#include "main.def.h"
