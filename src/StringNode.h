#ifndef __STRINGNODE_H__
#define __STRINGNODE_H__
#include <vector>
#include <string>

class StringNode {
	public:
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
#endif //_STRINGNODE_H__
