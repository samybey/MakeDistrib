#ifndef PARSER_INCLUDE
#define PARSER_INCLUDE

#include <regex>
#include <iostream>

#include "readFile.cpp"
#include "Node.cpp"

std::vector<Node> parseMakefile(char* inputFile);

#endif
