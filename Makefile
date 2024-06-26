# Makefile

CC = gcc
CFLAGS = -Wall

all: main

main: main.o student.o
	$(CC) $(CFLAGS) -o main main.o student.o

main.o: main.c student.h
	$(CC) $(CFLAGS) -c main.c

student.o: student.c student.h
	$(CC) $(CFLAGS) -c student.c

clean:
	rm -f main *.o
