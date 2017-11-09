CHARMDIR = /user/2/.base/gaunetc/home/3A/sysdistrib/charm-v6.8.1
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)

default: all
all: Main

Main : Main.o Node.o Parser.o StringNode.o
	$(CHARMC) -language charm++ -o Node Main.o Node.o Parser.o StringNode.o

Main.o : Main.C Main.h Main.decl.h Main.def.h Node.decl.h Parser.decl.h
	$(CHARMC) -o Main.o Main.C

Main.decl.h Main.def.h : Main.ci
	$(CHARMC) Main.ci

Main.h: Node.decl.h Parser.decl.h

Node.o : Node.C Node.h Node.decl.h Node.def.h
	$(CHARMC) -o Node.o Node.C

Node.decl.h Node.def.h : Node.ci
	$(CHARMC) Node.ci

Parser.o : Parser.C Parser.h Parser.decl.h Parser.def.h
	$(CHARMC) -o Parser.o Parser.C

Parser.decl.h Parser.def.h : Parser.ci
	$(CHARMC) Parser.ci

StringNode.o : StringNode.C StringNode.h StringNode.decl.h StringNode.def.h
	$(CHARMC) -o StringNode.o StringNode.C

StringNode.decl.h StringNode.def.h : StringNode.ci
	$(CHARMC) StringNode.ci

clean:
	rm -f Main.decl.h Main.def.h Main.o Parser.o Parser.decl.h StringNode.o StringNode.decl.h StringNode.def.h
	rm -f Node.decl.h Node.def.h Node.o
	rm -f Node charmrun
