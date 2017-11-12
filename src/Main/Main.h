#ifndef __MAIN_H__
#define __MAIN_H__

#include <map>
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


class Main : public CBase_Main {
	public:
		/// Constructors ///
		Main(CkArgMsg* msg);
		Main(CkMigrateMessage* msg);

		/// Entry Methods ///
		void done();
};

#endif //__MAIN_H__
