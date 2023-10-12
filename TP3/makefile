exe: listes.o main.o
	gcc listes.o main.o -o test

listes.o: listes.c listes.h
	gcc -c listes.c -o listes.o -Wall

projet.o: projet.c listes.h
	gcc -c main.c -o main.o -Wall
