test2:test2.o LinkStack.o
		gcc -o test2 test2.o LinkStack.o:
test2.o:test2.c
		gcc -c test2.c -o LinkStack.o
LinkStack.o:LinkStack.c LinkStack.h
		gcc -c LinkStack.c -o LinkStack.o

