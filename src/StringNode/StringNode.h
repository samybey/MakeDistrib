#ifndef __STRINGNODE_H__
#define __STRINGNODE_H__

#include <string>
class StringNode : public CBase_StringNode {
	public:
		/// Constructors ///
		StringNode(std::string name,
			std::vector<std::string> dependencesVector,
			std::string command);~StringNode() {
			m_dependencesVector.clear();
		}
		StringNode(CkMigrateMessage *msg);
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

		bool deleteDependence(std::string dependence);

		void displayNode();

	private:
		std::string m_name;

		std::vector<std::string> m_dependencesVector;

		std::string m_command;
};

#endif //__STRINGNODE_H__
