#ifndef __PARSER_H__
#define __PARSER_H__

#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

class StringNode {
	public:
		/// Constructors ///
		StringNode(std::string name,
			std::vector<std::string> dependencesVector,
			std::string command);

		~StringNode() {
			m_dependencesVector.clear();
		}

		/// Entry Methods ///
		std::string getName() {
			return m_name;
		}

		std::vector<std::string> getDependencesVector() {
			return m_dependencesVector;
		}

		std::string getCommand() {
			return m_command;
		}
	private:
		std::string m_name;

		std::vector<std::string> m_dependencesVector;

		std::string m_command;
};

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
