#include "parser/parser.cpp"

using namespace std;

int main(int argc, char* argv[]) {
	vector<stringNode> testVecString = parseMakefile(argv[1]);

	for(auto i : testVecString) {
		i.displayNode();
	}
}
