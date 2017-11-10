#ifndef __NODE_H__
#define __NODE_H__
#include "StringNode.h"
#include "Node.decl.h"
#include <string>
#include <iostream>

class int_message : public CMessage_int_message {
	public:
		int value;
		int_message(int val) :
			value(val) {
		}

};

class Node : public CBase_Node {

	public:
		/// Constructors ///
		Node(std::string name,
			std::vector<CProxy_Node> dependancesVector,
			std::string command,
			int countDone = 0);
		Node(CkMigrateMessage *msg);
		~Node() {
			m_dependencesVector.clear();
		}

		int_message* isGoodName(std::string name);

		std::vector<CProxy_Node> getDependencesVector() {
			return m_dependencesVector;
		}

		void setDependencesVector(std::vector<CProxy_Node> dependencesVector) {
			m_dependencesVector = dependencesVector;
		}

		std::string getCommand() {
			return m_command;
		}

		/// Entry Methods ///
		void exec(std::vector<std::string> dependencesVector,
			std::vector<StringNode> stringVec);
		void exec(CProxy_Node pereProxy,
			std::vector<std::string> dependencesVector,
			std::vector<StringNode> stringVec);
		void execCommand();
		void done();
	private:
		std::string m_name;
		std::vector<CProxy_Node> m_dependencesVector;
		std::string m_command;
		int m_countDone;
		CProxy_Node m_pereProxy;
};
#endif //__NODE_H__
