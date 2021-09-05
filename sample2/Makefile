CC=gcc

all: main

main: main.o sum.o
	$(CC) main.o sum.o -o main

main.o: main.c
	$(CC) -c main.c

sum.o: sum.c
	$(CC) -c sum.c

clean:
	rm -rf *o main

run: 
	./main
