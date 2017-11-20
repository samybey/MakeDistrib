CHARMDIR =  ../charm
OPTS = -display
CHARMC = $(CHARMDIR)/bin/charmc
CHARMDEBUG =

default: all
all: Main

Main : Main.o Node.o
	$(CHARMC) -tracemode projections -language charm++ -o test/Main build/Main.o build/Node.o

Main.o : src/Main/Main.C src/Main/Main.h Main.decl.h Main.def.h Node.decl.h
	$(CHARMC) -o build/Main.o src/Main/Main.C

Main.decl.h Main.def.h : src/Main/Main.ci
	cd src/Main ; ../../$(CHARMC) Main.ci ; mv Main.decl.h ../../build/ ; mv Main.def.h ../../build/ ; cd ../..

Main.h: Node.decl.h

Node.o : src/Node/Node.C src/Node/Node.h Node.decl.h Node.def.h
	$(CHARMC) -o build/Node.o src/Node/Node.C

Node.decl.h Node.def.h : src/Node/Node.ci
	cd src/Node ; ../../$(CHARMC) Node.ci ; mv Node.decl.h ../../build/ ; mv Node.def.h ../../build/ ; cd ../..

clean:
	rm -f build/Main.decl.h build/Main.def.h build/Main.o
	rm -f build/Node.decl.h build/Node.def.h build/Node.o
	rm -f test/Main charmrun
