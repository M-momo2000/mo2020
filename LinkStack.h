#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
}       LinkStack;
LinkStack *InitStack ();
int empty(LinkStack *s);
void Push(LinkStack *s,dataType x);
void Pop(LinkStack *s);
dataType GetTop(LinkStack *);



