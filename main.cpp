#include "parser/parser.cpp"

int main (int argc, char* argv[]) {
	vector<Node> vec = parseMakefile(argv[1]);
	for(auto i : vec) {
		i.displayNode();
	}
}
