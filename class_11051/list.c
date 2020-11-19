#include "list.h"

//创立一个链表
LinkList* CreatList(){
	LinkList *head;
	head=(LinkList*)malloc(sizeof(LinkList));
	head->next=NULL;
	return head;
}
//求求链表的元素个数
int Size(LinkList *l){
	LinkList *p=l->next;
	int k=1;
	while (p){
 	         k++;
	         p = p->next;
	}
	return k;
}
//在链表的第k个位置插入元素
void Insert(LinkList *l,int k, dataType x){
	if(k<1) 
	        exit(1);//出表
	LinkList *p= l;
	int i = 0;
	while (p && i<k-1){
	       p = p->next;
	       p->next;
	       i++;
	}
	if(!p) exit(1);
	LinkList *s =(LinkList*)malloc(sizeof(LinkList));
	s->data = x;
	s->next = p->next;
	p->next = s;
}

//删除
void Delete(LinkList *l,int k){
	if(k<1) exit(1);
	LinkList *p=l;
	int i=0;
	while (p->next && i<k-1){
	        p=p->next;
	        i++;
        } 
        if(p->next=NULL) exit(1);
        LinkList *q = p->next;
        p->next = q->next;
        free(q);
}
//判断链表是否为空
int Empty(LinkList*l,int k){
	return l->next==NULL;
}
//求值
     dataType GetData(LinkList *l,int k){
	if(k<1)
		exit (1);
	        LinkList *p =l;
	        int i = 0;
	      while (p && i<k)
	      {
                p = p->next;
                i++;
	}
	if(!p) 
	      exit(1);
	      return p->data;
}
//找值
       LinkList* Find(LinkList *l,dataType x) {
	    LinkList *p = l->next;
	    while (p && p->data!=x)
		  p = p->next;
		  return p;
            }	
//输出
     void Print(LinkList *l) {
	LinkList *p = l->next;
	while (p) {
		   printf("%d",p->data);
		   p = p->next;
	}
	printf("\n");

   }  
//清空
      void ClearList(LinkList *l){
              LinkList *p,*q;
              p=l->next;
               while(p) {
	              q= p;
	              p=p->next;
	              free(q);
          }  
          l->next=NUL
  }































