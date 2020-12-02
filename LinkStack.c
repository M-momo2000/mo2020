#include"LinkStack.h"
//初始化
LinkStack *InitStack () {
	LinkStack *t=(LinkStack *)malloc(sizeof(LinkStack));
	t->next=NULL;
	return t; }


//判空
int empty(LinkStack *s) {
return s->next==NULL;
}

//k进栈
void Push(LinkStack *s,dataType x) {
 struct node *t=(struct node*)malloc(sizeof(struct node));
t->data=x;
t->next=s->next;
s->next=t;
}
//出栈
void Pop(LinkStack *s) {
	if(empty(s)) exit(1);
	struct node *p=s->next;
	s->next=p->next;
	free(p);
}
//取栈顶值
dataType GetTop(LinkStack *s) {
	return s->next->data;
}
char *c = "0123456789ABCDEF";
void Conversion(int n,int d) {
	LinkStack *s = InitStack();
	while (n) {
		Push(s,n%d);
		n /= d;
	}
	while (!empty(s)) {
		printf("%c",c[GetTop(s)]);
		Pop(s);
	}
	printf("\n");
}
