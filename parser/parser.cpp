#include "parser.h"

using namespace std;

string parseFile(char* inputFile) {

	ifstream file(inputFile, ios::in);
	string makefile = "";

	if (!file) {
		cerr << "Impossible d'ouvrir le fichier !" << endl;
		return makefile;
	}

	stringstream buffer;
	buffer << file.rdbuf();
	file.close();
	makefile = buffer.str();

	return makefile;
}

vector<stringNode> firstPass(char* inputFile) {
	/*
	string makefile = parseFile(inputFile);
	smatch match;
	vector<stringNode> vec;

	string target;
	vector < string > dependencesVector;
	string command;

	int i;
	string dependence = "";
	string rest;

	try {
		regex reg(
			"(?:([\\w]+(?:.[\\w]+)?):(?: ([\\w. ]+))?\\n\\t([\\w. -_]+)(?:\\n|$)+)",
			regex_constants::ECMAScript);
		while (regex_search(makefile, match, reg)) {
			i = 0;
			target = "";
			dependencesVector.clear();
			dependence = "";
			command = "";

			for (auto x : match) {
				switch (i) {
				case 0: //match global
					break;
				case 1: //cible
					target = x;
					break;
				case 2: //dependences
					rest = x.str();
					dependence = rest.substr(0, rest.find(" "));
					while (dependence != rest) {
						dependencesVector.push_back(dependence);
						rest = rest.substr(rest.find(" ") + 1, rest.size() - 1);
						dependence = rest.substr(0, rest.find(" "));

					}
					dependencesVector.push_back(rest);
					break;
				case 3: //commande
					command = x;
				default: //autre match => erreur
					break;
				}
				i++;
			}
			vec.push_back({target, dependencesVector, command});
			makefile = match.suffix().str();
		}
	} catch (const regex_error &e) {
		cout << "error :" << "\n";
		cout << e.what();
		if (e.code() == regex_constants::error_brack) {
			cout << "The code was error_brack\n";
		}
	}

	//Vec est le vecteur de node bien faits
	return vec;
	//return createNodeSharedVector(vec);
	*/
	vector < stringNode > vec;

	std::string target1 = "hello";
	std::vector < std::string > dependencesVector1;
	dependencesVector1.push_back("hello.o");
	dependencesVector1.push_back("main.o");
	std::string command1 = "gcc -o hello hello.o main.o";
	vec.push_back({target1, dependencesVector1, command1});

	std::string target2 = "hello.o";
	std::vector < std::string > dependencesVector2;
	dependencesVector2.push_back("hello.c");
	std::string command2 = "gcc -o hello.o -c hello.c -W -Wall -ansi -pedantic";
	vec.push_back({target2, dependencesVector2, command2});

	std::string target3 = "main.o";
	std::vector < std::string > dependencesVector3;
	dependencesVector3.push_back("main.c");
	dependencesVector3.push_back("hello.h");
	std::string command3 = "gcc -o main.o -c main.c -W -Wall -ansi -pedantic";
	vec.push_back({target3, dependencesVector3, command3});
	return vec;
}

vector<CProxy_Node> secondPass(vector<stringNode> firstPassVec) {
	vector < CProxy_Node > secondPassVec = secondPassVecInit(firstPassVec);
	vector < CProxy_Node > dependencesTemp;

	for (auto strNode : firstPassVec) {
		dependencesTemp.clear();
		dependencesTemp = createNodeDep(strNode.getDependencesVector(),
			secondPassVec);
		for (auto i : secondPassVec) {
			if (i.getName() == strNode.getName()) {
				i.setDependencesVector(dependencesTemp);
			}
		}
	}

	return secondPassVec;

}

vector<CProxy_Node> secondPassVecInit(vector<stringNode> firstPassVec) {
	vector < CProxy_Node > secondPassVec;
	for (auto strNode : firstPassVec) {
		secondPassVec.push_back(
			CProxy_Node::ckNew(strNode.getName(), {}, strNode.getCommand()));
	}
	return secondPassVec;
}

vector<CProxy_Node> createNodeDep(vector<string> stringDepVec,
	vector<CProxy_Node> secondPassVec) {
	vector < CProxy_Node > depNodeVec;
	if (!stringDepVec.empty()) {
		for (auto strDep : stringDepVec) {
			for (auto secondPassNode : secondPassVec) {
				if (secondPassNode.getName() == strDep) {
					depNodeVec.push_back(secondPassNode);
					break;
				}
			}
		}
	}
	return depNodeVec;
}

