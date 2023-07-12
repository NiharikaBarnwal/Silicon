//Add two polynomials using linked list
//Niharika Barnwal,30
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coeff;
	int expt;
	struct node *next;
};
typedef struct node NODE;
void create(NODE *);
void polyadd(NODE *,NODE *,NODE *);
void display(NODE *);
int main()
{
	NODE *p=(NODE *)malloc(sizeof(NODE));
	NODE *q=(NODE *)malloc(sizeof(NODE));
	NODE *r=(NODE *)malloc(sizeof(NODE));
	printf("Enter the 1st polynomial:\n");
	create(p);
	printf("1st polynomial is:\n");
	display(p);
	printf("Enter the 2nd polynomial:\n");
	create(q);
	printf("2nd polynomial is:\n");
	display(q);
	polyadd(p,q,r);
	printf("The resultant polynomial is:\n");
	display(r);
	return 0;
}
void create(NODE *node)
{
	int ch;
	do
	{
		printf("Enter the coefficient:");
		scanf("%d",&node->coeff);
		printf("Enter the exponent:");
		scanf("%d",&node->expt);
		node->next=NULL;
		printf("Enter 1 to continue or 0 to stop:");
		scanf("%d",&ch);
		if(ch==0)
			break;
		node->next=(NODE *)malloc(sizeof(NODE));
		node=node->next;
	}while(ch==1);
}
void polyadd(NODE *p,NODE *q, NODE *r)
{
	while(p&&q)
	{
		if(p->expt > q->expt)
		{
			r->coeff=p->coeff;
			r->expt=p->expt;
			p=p->next;
		}
		else if(p->expt < q->expt)
		{
			r->coeff=q->coeff;
			r->expt=q->expt;
			q=q->next;
		}
		else //when p->expt==q->expt
		{
			r->expt=p->expt;
			r->coeff=p->coeff+q->coeff;
			p=p->next;
			q=q->next;
		}
		r->next=NULL;
                if(p==NULL && q==NULL)
                        break;
		r->next=(NODE *)malloc(sizeof(NODE));
		r=r->next;
	}
	while(p || q)
	{
		if(p)
		{
			r->expt=p->expt;
			r->coeff=p->coeff;
			p=p->next;
		}
		else if(q)
		{
			r->expt=q->expt;
                        r->coeff=q->coeff;
                        q=q->next;
		}
		r->next=NULL;
		if(p==NULL && q==NULL)
			break;
		r->next=(NODE *)malloc(sizeof(NODE));
		r=r->next;
	}
}
void display(NODE *node)
{
	while(node!=NULL)
	{
		printf("%d\t%d\n",node->coeff,node->expt);
		node=node->next;
	}
}
