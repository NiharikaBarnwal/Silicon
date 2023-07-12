//Sort the single linked list
//Niharika Barnwal,30
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
void create(NODE *);
NODE *sort(NODE *);
void display(NODE *);
int main()
{
	NODE *node=(NODE *)malloc(sizeof(NODE));
	printf("Enter the list:\n");
	create(node);
	printf("The node is: ");
	display(node);
	sort(node);
	printf("The list in ascending order:");
	display(node);
}
void create(NODE *node)
{
	int ch;
	do
	{
		printf("Enter the data:");
		scanf("%d",&node->info);
		node->next=NULL;
		printf("Press 1 to continue and 0 to exit:");
  		scanf("%d",&ch);
		if(ch==0)
			break;
		node->next=(NODE *)malloc(sizeof(NODE));
		node=node->next;
	}while(ch!=0);
}
NODE *sort(NODE *node)
{
	int x;
	NODE *r,*new,*p, *start;
	start=node;
	r=node;
	node=node->next;
	for(p=node;p!=NULL;p=p->next)
	{
		for(new=start;new->next!=NULL;new=new->next)
		{
			if(node->info >= r->info)
			{
				r=node;
				node=node->next;
			}
			else
			{
				x=r->info;
				r->info=node->info;
				node->info=x;
				r=node;
				node=node->next;
			}
		}
		r=start;
		node=start->next;
	}
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