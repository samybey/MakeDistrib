#include "../../build/Main.decl.h"
#include "Main.h"

#include "../../build/Node.decl.h"
#include "../../build/Parser.decl.h"
#include "../Parser/Parser.h"
// Entry point of Charm++ application
Main::Main(CkArgMsg* msg) {

  char* nomMakefile  = msg->argv[1];

  delete msg;

  CProxy_Parser parser = CProxy_Parser::ckNew(CkMyPe());
  Parser *c=parser.ckLocal();
  std::vector<CProxy_Node> vecNodes = c->secondPass(c->firstPass(nomMakefile));

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
