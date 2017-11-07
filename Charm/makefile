CHARMDIR = ../../charm
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)

default: all
all: node

node : main.o node.o
	$(CHARMC) -language charm++ -o node main.o node.o

main.o : main.C main.h main.decl.h main.def.h node.decl.h
	$(CHARMC) -o main.o main.C

main.decl.h main.def.h : main.ci
	$(CHARMC) main.ci

main.h: node.decl.h

node.o : node.C node.h node.decl.h node.def.h main.decl.h
	$(CHARMC) -o node.o node.C

node.decl.h node.def.h : node.ci
	$(CHARMC) node.ci

clean:
	rm -f main.decl.h main.def.h main.o
	rm -f node.decl.h node.def.h node.o
	rm -f node charmrun
