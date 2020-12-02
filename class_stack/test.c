#include"stack.h"
int  main () {

	SeqStack *s= createStack();
	push(s,80);
	push(s,90);
	pop(s);
	push(s,70);
	printf("栈有%d个元素，栈顶元素为:%d\n",size(s),top(s));
	system("pause");
	}


