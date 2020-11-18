#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef int DataType;
typedef struct node{
	DataType data;
	struct node *next;
}LinkList;

//创立一个链表
LinkList*CreatList(){
	LinkList *head;
	head=(LinkList*)malloc(sizeof(LinkList));
	head->next=NULL;
	return head;
}
//求求链表的元素个数
int Size(LinkList *l){
	struct node *p=l->next;
	int k=0;
	while (p!=NULL){
	k++;
	p=p->next;
	}
	return k;
}
//在链表的第k个位置插入元素
void Insert(LinkList*l,int k, DataType x){
	if(k<1) exit(1);//出表
	
	struct node *p=l;
	int i=0;
	while(p && i<k-1){

	p=p->next;
	i++;
	}
	if(!p) exit(1);
	 struct node *s=(struct node*)malloc(sizeof(struct node));
	s->data=x;
	s->next=p->next;
	p->next=s;
}

//删除
void Delete(LinkList*l,int k){
	if(k<1) exit(1);
	struct node*p=l;
	int i=0;
	while (p->next&&i<k-1){
	p=p->next;
	i++;
}
if(p->next=NULL) exit(1);
struct node *q=p->next;
p->next=q->next;
free(q);
}
//判断链表是否为空
int Empty(LinkList*l){
	return l->next==NULL;
}
//求值
DataType GetData(LinkList*l,int k){
	if(k<1) exit (1);
	struct node *p=l;
	int i=0;
	while (p&& i<k)
	{
p=p->next;
i++;
	}
	if(!p) exit(1);
	return p->data;
}
//找值
LinkList* Find(LinkList*l,DataType x) {
	struct node *p=l;
	while (p){
		if(p->data==x)	{
		return p;
		}
	p=p->next;
	}	
	return NULL;
}
//输出
void Print(LinkList *l) {
	struct node*p=l->next;
	while (p) {
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");

}
//清空
void Clear(LinkList*l)
{
struct node *p,*q;
p=l->next;
while(p)
{
	q=p;
	p=p->next;
	free(q);
}
      l->next=NULL;
      }

int main(int argc,char **argv)
{
	LinkList *list=CreatList();
	Insert(list,1,10);
	Insert(list,1,20);
	Delete(list,2);
	Insert(list,1,30);
	Insert(list,1,40);
	printf("链表的元素个数为：%d\n",Size(list));

	printf("链表的第二个元素为： %d\n",GetData(list,2));
	
	system("pause");
}

















