CHARMDIR =  ../charm
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)

default: all
all: Main

Main : Main.o Node.o Parser.o StringNode.o
	$(CHARMC) -language charm++ -o Main build/Main.o build/Node.o build/Parser.o build/StringNode.o

Main.o : src/Main/Main.C src/Main/Main.h Main.decl.h Main.def.h Node.decl.h Parser.decl.h StringNode.decl.h
	$(CHARMC) -o build/Main.o src/Main/Main.C

Main.decl.h Main.def.h : src/Main/Main.ci
	cd src/Main ; ../../$(CHARMC) Main.ci ; mv Main.decl.h ../../build/ ; mv Main.def.h ../../build/ ; cd ../..

Main.h: Node.decl.h Parser.decl.h

Node.o : src/Node/Node.C src/Node/Node.h Node.decl.h Node.def.h
	$(CHARMC) -o build/Node.o src/Node/Node.C

Node.decl.h Node.def.h : src/Node/Node.ci
	cd src/Node ; ../../$(CHARMC) Node.ci ; mv Node.decl.h ../../build/ ; mv Node.def.h ../../build/ ; cd ../..

Parser.o : src/Parser/Parser.C src/Parser/Parser.h Parser.decl.h Parser.def.h StringNode.decl.h
	$(CHARMC) -o build/Parser.o src/Parser/Parser.C

Parser.decl.h Parser.def.h : src/Parser/Parser.ci
	cd src/Parser ; ../../$(CHARMC) Parser.ci ; mv Parser.decl.h ../../build/ ; mv Parser.def.h ../../build/ ; cd ../..

Parser.h : StringNode.decl.h

StringNode.o : src/StringNode/StringNode.C src/StringNode/StringNode.h StringNode.decl.h StringNode.def.h
	$(CHARMC) -o build/StringNode.o src/StringNode/StringNode.C

StringNode.decl.h StringNode.def.h : src/StringNode/StringNode.ci
	cd src/StringNode ; $../../$(CHARMC) StringNode.ci ; mv StringNode.decl.h ../../build/ ; mv StringNode.def.h ../../build/ ; cd ../..

clean:
	rm -f build/Main.decl.h build/Main.def.h build/Main.o
	rm -f build/Parser.decl.h build/Parser.def.h build/Parser.o
	rm -f build/StringNode.decl.h build/StringNode.def.h build/StringNode.o
	rm -f build/Node.decl.h build/Node.def.h build/Node.o
	rm -f Node charmrun
