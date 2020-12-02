#include"bintree.h"

void CreatTree(BinNode *t,DataType x) {
	DataType d;
	scanf("%c",&d);
	if (d==x) {
		t=NULL;
	} else {
		t= (BinNode*)malloc(sizeof(BinNode));
		t->data = d;
		CreatTree(t->lchild,x);
		CreatTree(t->rchild,x);
	}
}

void PreOrder(BinNode *t) {
	if (t) {
		printf("%c",t->data);
		PreOrder(t->lchild);
		PreOrder(t->rchild);
	}
}
void InOrder(BinNode *t) {
	if (t) {
		InOrder(t->lchild);
		printf("%c",t->data);
		InOrder(t->rchild);
	}
}

void PostOrder(BinNode *t) {
	if (t) {
		PostOrder(t->lchild);
		PostOrder(t->rchild);
		printf("%c",t->data);
	}
}




