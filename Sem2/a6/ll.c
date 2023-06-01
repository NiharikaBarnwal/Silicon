//Linked list having more than two nodes
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
void createList(NODE *);
void traverseList(NODE *);
int main()
{
	NODE *node;
	node=(NODE *)malloc(sizeof(NODE));
	createList(node);
	traverseList(node);
	return 0;
}
void createList(NODE *node)
{
	int ch;
	printf("Enter the data :");
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
void traverseList(NODE *node)
{
	int count=0;
	printf("Linked list:");
	while(node!=NULL)
	{
		printf("%d ",node->info);
		node=node->next;
		count++;
	}
	printf("\nThe number of nodes in the linked list is %d\n",count);
}
