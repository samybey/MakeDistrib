#ifndef PARSER_INCLUDE
#define PARSER_INCLUDE

#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

#include "stringNode.h"

std::string parseFile(char* inputFile);

std::vector<stringNode> firstPass(char* inputFile);

std::vector<CProxy_Node> secondPass(std::vector<stringNode> firstPassTab);

std::vector<CProxy_Node> secondPassVecInit(std::vector<stringNode> firstPassVec);

std::vector<CProxy_Node> createNodeDep(std::vector<std::string> stringDepVec,
	std::vector<CProxy_Node> secondPassVec);

#endif
