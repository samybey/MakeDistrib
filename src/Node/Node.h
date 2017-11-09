#ifndef __NODE_H__
#define __NODE_H__

#include <string>
#include <iostream>

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

		std::string getName() {
			return m_name;
		}

		std::vector<CProxy_Node> getDependencesVector() {
			return m_dependencesVector;
		}

		void setDependencesVector(std::vector<CProxy_Node> dependencesVector) {
			m_dependencesVector = dependencesVector;
		}

		std::string getCommand() {
			return m_command;
		}

		void displayNode();

		/// Entry Methods ///
		void exec(CProxy_Node pereProxy);
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
