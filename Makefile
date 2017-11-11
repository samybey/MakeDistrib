CHARMDIR =  ../charm
OPTS = -display
CHARMC = $(CHARMDIR)/bin/charmc
CHARMDEBUG = ../ccs_tools/bin/charmdebug

default: all
all: Main

Main : Main.o
	$(CHARMC)  -language charm++ -o Main build/Main.o

Main.o : src/Main/Main.C src/Main/Main.h Main.decl.h Main.def.h
	$(CHARMC) -o build/Main.o src/Main/Main.C

Main.decl.h Main.def.h : src/Main/Main.ci
	cd src/Main ; ../../$(CHARMC) Main.ci ; mv Main.decl.h ../../build/ ; mv Main.def.h ../../build/ ; cd ../..

	
clean:
	rm -f build/Main.decl.h build/Main.def.h build/Main.o
	rm -f Main charmrun
