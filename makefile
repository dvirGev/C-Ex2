.PHONY: all clean
CC = gcc
FLAGS = -Wall -g
connections:
all: my_mat.o connections 

connections: main.o my_mat.o
	$(CC) $(FLAGS) -o connections main.o my_mat.o
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 
clean:
	rm -f *.o connections