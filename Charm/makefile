CHARMDIR = /user/2/.base/gaunetc/home/3A/sysdistrib/charm-v6.8.1
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)

default: all
all: Node

Node : main.o Node.o
	$(CHARMC) -language charm++ -o Node main.o Node.o

main.o : main.C main.h main.decl.h main.def.h Node.decl.h
	$(CHARMC) -o main.o main.C

main.decl.h main.def.h : main.ci
	$(CHARMC) main.ci

main.h: Node.decl.h

Node.o : Node.C Node.h Node.decl.h Node.def.h main.decl.h
	$(CHARMC) -o Node.o Node.C

Node.decl.h Node.def.h : Node.ci
	$(CHARMC) Node.ci

clean:
	rm -f main.decl.h main.def.h main.o
	rm -f Node.decl.h Node.def.h Node.o
	rm -f Node charmrun
