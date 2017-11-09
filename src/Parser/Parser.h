#ifndef __PARSER_H__
#define __PARSER_H__

#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

#include "../StringNode/StringNode.h"
class Parser : public CBase_Parser {
	public:
		/// Constructors ///
		Parser();
		Parser(CkMigrateMessage *msg);
		~Parser();

		/// Entry Methods ///
		std::string Parser::parseFile(char* inputFile);

		std::vector<CProxy_StringNode> Parser::firstPass(char* inputFile);

		std::vector<CProxy_Node> Parser::secondPass(std::vector<CProxy_StringNode> firstPassTab);

		std::vector<CProxy_Node> Parser::secondPassVecInit(std::vector<CProxy_StringNode> firstPassVec);

		std::vector<CProxy_Node> Parser::createNodeDep(std::vector<std::string> stringDepVec,
			std::vector<CProxy_Node> secondPassVec);
}

#endif //__PARSER_H__
