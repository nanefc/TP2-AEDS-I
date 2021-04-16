all: main

main: tp.o menu.o main.c
	gcc -g3 main.c tp.o menu.o -o main

tp.o: tp.c
	gcc -g3 -c tp.c

menu.o: menu.c
	gcc -g3 -c menu.c
clear:
	rm *.o main
