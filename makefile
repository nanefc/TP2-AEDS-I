all: main
main: tp.o main.c
	gcc  main.c tp.o  -o main
tp.o: tp.c
	gcc -c tp.c
