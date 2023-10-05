exe: file.o main.o
	gcc file.o main.o -o test

file.o: file.c file.h
	gcc -c file.c -o file.o -Wall

projet.o: projet.c file.h
	gcc -c main.c -o main.o -Wall
