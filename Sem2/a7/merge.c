//Merge two nodes in ascending order
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
void create(NODE *);
NODE *merge_linkedlist(NODE *, NODE *, NODE *);
void display(NODE *);
int main()
{
	NODE *p=(NODE *)malloc(sizeof(NODE));
	NODE *q=(NODE *)malloc(sizeof(NODE));
	NODE *r=(NODE *)malloc(sizeof(NODE));
	printf("Enter the 1st node in ascending order:\n");
	create(p);
	printf("1st node is: ");
	display(p);
	printf("Enter the 2nd node in ascending order:\n");
        create(q);
        printf("2nd node is: ");
        display(q);
	r=merge_linkedlist(p,q,r);
	printf("Merged node: ");
	display(r);
}
void create(NODE *node)
{
	int ch;
	printf("Enter the data:");
	scanf("%d",&node->info);
	node->next=NULL;
	printf("Press 1 to continue and 0 to exit:");
	scanf("%d",&ch);
	while(ch!=0)
	{
		node->next=(NODE *)malloc(sizeof(NODE));
		node=node->next;
		printf("Enter the data: ");
		scanf("%d",&node->info);
		node->next=NULL;
		printf("Press 1 to continue and 0 to exit:");
		scanf("%d",&ch);
	}
}
NODE *merge_linkedlist(NODE *p, NODE *q, NODE *r)
{
	NODE *new;
	if(p==NULL)
		return q;
	if(q==NULL)
		return p;
	if(p&&q)
	{
		if(p->info<=q->info)
		{
			r=p;
			p=p->next;
		}
		else
		{
			r=q;
			q=q->next;
		}
		new=r;
	}
	while(p&&q)
	{
		if(p->info <= q->info)
		{
			r->next=p;
			r=p;
			p=p->next;
		}
		else
		{
			r->next=q;
			r=q;
			q=q->next;
		}
	}
	if(p==NULL)
		r->next=q;
	if(q==NULL)
		r->next=p;
	return new;
}
void display(NODE *node)
{
	while(node!=NULL)
	{
		printf("%d ",node->info);
		node=node->next;
	}
	printf("\n");
}
