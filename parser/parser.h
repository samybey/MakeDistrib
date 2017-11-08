#ifndef PARSER_INCLUDE
#define PARSER_INCLUDE

#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

#include "stringNode.cpp"

//#include "../Charm/node.decl.h"


std::string parseFile(char* inputFile);

std::vector<stringNode> parseMakefile(char* inputFile);
/*
std::vector<Node> secondPass(std::vector<stringNode> firstPassTab);

std::vector<Node> secondPassVecInit(std::vector<stringNode> firstPassVec);

std::vector<CProxy_Node> createNodeDep(std::vector<std::string> stringDepVec,
		std::vector<Node> secondPassVec);
*/
#endif
