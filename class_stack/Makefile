test:test.o stack.o
		gcc -o test test.o stack.o:
test.o:test.c
		gcc -c test.c -o stack.o
stack.o:stack.c stack.h
		gcc -c stack.c -o stack.o
