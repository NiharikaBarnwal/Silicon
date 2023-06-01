//Search a particular node in linked list
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
void searchNode(NODE *);
int main()
{
	NODE *node;
	int val;
	node=(NODE *)malloc(sizeof(NODE));
	createList(node);
	traverseList(node);
	searchNode(node);
	return 0;
}
void createList(NODE *node)
{
	int ch;
	printf("Enter the data: ");
	scanf("%d",&node->info);
	node->next=NULL;
	printf("Press 1 to continue and 0 to exit: ");
	scanf("%d",&ch);
	while(ch!=0)
	{
		node->next=(NODE *)malloc(sizeof(NODE));
		node=node->next;
		printf("Enter the data: ");
		scanf("%d",&node->info);
		node->next=NULL;
		printf("Press 1 to continue and 0 to exit: ");
		scanf("%d",&ch);
	}
}
void traverseList(NODE *node)
{
	printf("Linked list: ");
	while(node!=NULL)
	{
		printf("%d ",node->info);
		node=node->next;
	}
	printf("\n");
}
void searchNode(NODE *node)
{
	int count=0, val;
	printf("Enter the value to be searched: ");
	scanf("%d",&val);
	while(node!=NULL)
	{
		count++;
		if(node->info==val)
		{
			printf("The value %d is at position %d at address = %x\n",val,count,node);
			break;
		}
		node=node->next;
	}
	if(node==NULL)
		printf("Node not found.\n");
}
