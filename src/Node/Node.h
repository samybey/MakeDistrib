#ifndef __NODE_H__
#define __NODE_H__

#include "../../build/Node.decl.h"
#include <string>
#include <iostream>

class StringNode {
	public:
		/// Constructors ///
		StringNode(std::string name,
			std::vector<std::string> dependencesVector,
			std::string command);

		~StringNode() {	}

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

class Node : public CBase_Node {

	public:
		/// Constructors ///
		Node(std::string name,
			std::vector<StringNode> stringNodeVec,
			std::vector<std::string> dependencesVector,
			std::string command,
			int countDone = 0);
		Node(CkMigrateMessage *msg);
		~Node() {
		}

		/// Entry Methods ///
		void exec(CProxy_Node pereProxy);
		void execCommand();
		void done();
	private:
		std::string m_name;
		std::vector<StringNode> m_stringNodeVec;
		std::vector<std::string> m_dependencesVector;
		std::string m_command;
		int m_countDone;
		CProxy_Node m_pereProxy;
};
#endif //__NODE_H__
