#include <string>

class Node {
public:
	Node(std::string cible, std::vector<std::string> dependences, std::string command);

	std::string getCible();

	std::vector<std::string> getDependences();

	std::string getCommand();

private:
	std::string cible;

	std::vector<std::string> dependences;

	std::string command;
};
