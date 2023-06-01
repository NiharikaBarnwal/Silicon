//Linked list having two nodes
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
void createList(NODE *node1)
{
	NODE *node2;
	node1->info=40;
	node1->next=NULL;
	node2=(NODE *)malloc(sizeof(NODE));
	node2->info=30;
	node2->next=NULL;
	node1->next=node2;
}
void traverseList(NODE *node)
{
	printf("Linked list:");
	while(node!=NULL)
	{
		printf("%d ",node->info);
		node=node->next;
	}
	printf("\n");
}
