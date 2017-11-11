#ifndef __MAIN_H__
#define __MAIN_H__

#include <string>
#include <regex>
#include <iostream>
#include <fstream>
#include <sstream>

class StringNode{
	public:
		/// Constructors ///
		StringNode(std::string name,
			std::vector<std::string> dependencesVector,
			std::string command);
		StringNode() {}

		~StringNode() {}

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
		std::string m_name = "";

		std::vector<std::string> m_dependencesVector = {};

		std::string m_command = "";
};
PUPbytes(StringNode);

class Node : public CBase_Node {

	public:
		/// Constructors ///
		Node(std::string name, std::vector<std::string> dependencesVector, std::string command);
		Node(CkMigrateMessage *msg);
		~Node() {
		}

		/// Entry Methods ///
		void exec(std::vector<StringNode> stringNodeVec);
		void exec(CProxy_Node pereProxy, std::vector<StringNode> stringNodeVec);
		void execCommand();
		void done();
		void display();
	private:
		std::string m_name;
		std::vector<std::string> m_dependencesVector;
		std::string m_command;
		int m_countDone;
		CProxy_Node m_pereProxy;
		bool m_isFirst = false;
};


class Main : public CBase_Main {
	public:
		/// Constructors ///
		Main(CkArgMsg* msg);
		Main(CkMigrateMessage* msg);

		/// Entry Methods ///
		void done();
};


#endif //__MAIN_H__
