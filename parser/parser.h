#ifndef PARSER_INCLUDE
#define PARSER_INCLUDE

#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

#include "../Charm/node.decl.h"
#include "stringNode.h"

std::string parseFile(char* inputFile);

std::vector<stringNode> parseMakefile(char* inputFile);

#endif
