#ifndef __PARSER_H__
#define __PARSER_H__

#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

class Parser : public CBase_Parser {
	public:
		/// Constructors ///
		Parser(std::vector<CProxy_Node> vectorNode = {});
		Parser(CkMigrateMessage *msg);
		~Parser() {
		}

		/// Entry Methods ///
		std::string parseFile(char* inputFile);

		std::vector<StringNode> firstPass(char* inputFile);

		std::vector<CProxy_Node> secondPass(std::vector<StringNode> firstPassTab);

		void secondPassVecInit(std::vector<StringNode> firstPassVec);

		std::vector<CProxy_Node> createNodeDep(std::vector<std::string> stringDepVec);

		std::vector<CProxy_Node> m_vectorNode;
};

#endif //__PARSER_H__
