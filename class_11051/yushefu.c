#include<stdio.h>
#include<malloc.h>

#define n 11
#define m 3
struct node {
	int no;

	struct node *next;
};
int main() 
{
	int k=0;
	struct node *p, *q, *r;
	p=q=(struct node*)malloc(sizeof(struct node));
	p->no=1;

	for (int i=2;i<=n;i++){
	      r=(struct node*)malloc(sizeof(struct node));
	      r->no=i;
	      q->next=r;
	      q=r;

	}
	      q->next=p;

	      q=p;

	while(q->next!=q) {
	                   k++;
	                   if (k==m) {
		             p->next=q->next;
		             free(q);
		             q=p->next;
		             k=0;
	             }
	             else {
		            p=q;
		            q=q->next;
	}
  }  

printf("最后一个获胜者的编号是: %d\n",q->no);

}

