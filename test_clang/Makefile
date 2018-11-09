CC=clang

all: test

helper: helper.c helper.h
	$(CC) -Wall -g -c helper.c

test: test.c helper.o
	$(CC) -Wall -g -o test test.c helper.o

clean:
	rm -f *.o
	rm -f test
