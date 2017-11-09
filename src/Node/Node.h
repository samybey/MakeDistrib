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
			int countDone = 0,
			bool first = false);
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

		void setFirst() {
			m_first = true;
		}

		/// Entry Methods ///
		void exec();
		void exec(CProxy_Node pereProxy);
		void execCommand();
		void done();
	private:
		std::string m_name;
		std::string m_command;
		std::vector<CProxy_Node> m_dependencesVector;
		int m_countDone;
		bool m_first;
		CProxy_Node m_pereProxy;
};
#endif //__NODE_H__
