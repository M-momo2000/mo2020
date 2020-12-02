#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define MaxSize 100
typedef int dataType;
typedef struct{
dataType data[MaxSize];
int top;
} SeqStack;

//创栈
SeqStack* createStack();
int empty(SeqStack *s);
int full(SeqStack *s);
void push(SeqStack *s,dataType x);
 void pop(SeqStack *s);
dataType top(SeqStack *s);
int size (SeqStack *s);
