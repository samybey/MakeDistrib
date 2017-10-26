#include <string>

class Node {
public:
	Node(std::string cible, std::vector<std::string> dependences, std::string command);

	std::string getTarget();

	std::vector<std::string> getDependences();

	std::string getCommand();

	void deleteDependence(std::string dependence);

private:
	std::string target;

	std::vector<std::string> dependences;

	std::string command;
};
