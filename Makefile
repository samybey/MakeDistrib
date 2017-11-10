CHARMDIR =  ../charm
OPTS = 
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)

default: all
all: Main

Main : Main.o Node.o Parser.o
	$(CHARMC) -language charm++ -o Main Main.o Node.o Parser.o

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

clean:
	rm -f Main.decl.h Main.def.h Main.o
	rm -f Parser.decl.h Parser.def.h Parser.o
	rm -f Node.decl.h Node.def.h Node.o
	rm -f Main charmrun
