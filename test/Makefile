hello: hello.o main.o
	gcc -o test/hello test/hello.o test/main.o

hello.o: test/hello.c
	gcc -o test/hello.o -c test/hello.c -W -Wall -ansi -pedantic

main.o: test/main.c test/hello.h
	gcc -o test/main.o -c test/main.c -W -Wall -ansi -pedantic
