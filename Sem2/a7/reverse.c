//Resverse the linked list
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
NODE *start;
void create(NODE *);
NODE *reverse(NODE *);
void display(NODE *);
int main()
{
	NODE *node=(NODE *)malloc(sizeof(NODE));
	printf("Enter the list to be reversed:\n");
	create(node);
	printf("The inputted list:");
	display(node);
	start=reverse(node);
	node=start;
	printf("The reversed list:");
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
NODE *reverse(NODE *node)
{
	NODE *temp, *prev, *r;
	if(node->next==NULL)
		return NULL;
	prev=node;
	prev->next=NULL;
	node=node->next;
	temp=node->next;
	while(temp)
	{
		r=temp->next;
		node->next=prev;
		temp->next=node;
		node=r;
		prev=temp;
		temp=node->next;
	}node=start;
	return start;
}
void display(NODE *node)
{
	while(node)
	{
		printf("%d ",node->info);
		node=node->next;
	}
	printf("\n");
}
