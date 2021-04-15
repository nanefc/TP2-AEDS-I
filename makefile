all: main

main: tp.o main.c
	gcc -g3 main.c tp.o  -o main

tp.o: tp.c
	gcc -g3 -c tp.c

clear:
	rm *.o main
