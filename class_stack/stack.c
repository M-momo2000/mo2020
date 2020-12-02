#include"stack.h"


//创栈
SeqStack* createStack() {
	SeqStack *t= (SeqStack*)malloc(sizeof(SeqStack));
	t->top=-1;
	return t;
}
 int empty(SeqStack* s) {
	 return s->top==-1;
 }

int full(SeqStack *s) {
	return s->top==MaxSize-1;
}

void push(SeqStack *s,dataType x)
	{
		if (full(s)) exit(1);
		s->data[++s->top] =x;
	}
 void pop(SeqStack *s)
{
	if (empty(s)) exit(1);
	s->top--;
}

dataType top(SeqStack *s) {
	if (empty(s)) exit(1);
	return s->data[s->top];
}

int size (SeqStack *s) {
	return s->top +1;
}

