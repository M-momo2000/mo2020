#ifndef dlb_h
#define dlb_h
#include<stdio.h>
#include<stdlib.h>

typedef int dataType;
typedef struct node{
dataType data;
	struct node *next;
}LinkList;

int Size(LinkList *l);
void Insert(LinkList *l,int k,dataType x);	
void Delete(LinkList *l,int k);
int Empty(LinkList *l,int k);
dataType GetData(LinkList *l,int k);
LinkList *Find(LinkList *l,dataType x);
void Print(LinkList *l);
void ClearList(LinkList *l);	

#endif
