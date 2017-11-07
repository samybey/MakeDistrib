#ifndef PARSER_INCLUDE
#define PARSER_INCLUDE

#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

#include "../Charm/node.C"

std::string parseFile(char* inputFile);

std::vector<Node> parseMakefile(char* inputFile);

#endif
