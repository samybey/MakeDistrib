#include "parser/parser.cpp"

int main (int argc, char* argv[]) {
	vector<Node> vec;
	//vec = parseMakefile(argv[1]);
	//Decommenter la ligne du dessus lorsque gcc sera en version > 4.9
	std::string target1 = "hello";
	std::vector<std::string> dependencesVector1;
	dependencesVector1.push_back("hello.o");
	dependencesVector1.push_back("main.o");
	std::string command1 = "gcc -o hello hello.o main.o";
	vec.push_back({target1,dependencesVector1, command1});

	std::string target2 = "hello.o";
	std::vector<std::string> dependencesVector2;
	dependencesVector2.push_back("hello.c");
	std::string command2 = "gcc -o hello.o -c hello.c -W -Wall -ansi -pedantic";
	vec.push_back({target2,dependencesVector2, command2});

	std::string target3 = "main.o";
	std::vector<std::string> dependencesVector3;
	dependencesVector3.push_back("main.c");
	dependencesVector3.push_back("hello.h");
	std::string command3 = "gcc -o main.o -c main.c -W -Wall -ansi -pedantic";
	vec.push_back({target3,dependencesVector3, command3});


	for(auto i : vec) {
		i.displayNode();
	}
}
