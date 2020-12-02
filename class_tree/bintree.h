#ifndef binTree_h
#define binTree_h

#include<stdio.h>
#include<stdlib.h>

typedef int DataType;
typedef struct _binNode {
	DataType data;
	struct binNode *lchild;
	struct binNode *rchild;
} BinNode;

void CreateTree(BinNode *t,DataType x);
void PreOrder(BinNode *t);
void TnOrder(BinNode *t);
void PostOrder(BinNode *t);

#endif

