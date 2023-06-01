//Delete function in linked list
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
void createList(NODE *);
void traverseList(NODE *);
void delete_first(NODE *);
void delete_last(NODE *);
void delete_pos(NODE *);
void delete_after(NODE *);
int main()
{
	NODE *node=(NODE *)malloc(sizeof(NODE));
	int opt;
	createList(node);
	start=node;
	printf("Option\n1=Display\n2=Delete 1st node\n3=Delete last node\n4=Delete from a given position\n5=Delete after a specific node\n6=Exit\n");
	do
	{
		printf("Enter the option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				traverseList(node);
				break;
			case 2:
				delete_first(node);
				node=start;
				break;
			case 3:
				delete_last(node);
				node=start;
				break;
			case 4:
				delete_pos(node);
				break;
			case 5:
				delete_after(node);
				break;
			case 6:
				break;
			default:
				printf("Invalid option\n");
				break;
		}
	}while(opt!=6);
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
	if(node==NULL)
		printf("The linked list is empty\n");
	else
	{
		printf("Linked list:");
		while(node!=NULL)
		{
			printf("%d ",node->info);
			node=node->next;
			count++;
		}
		printf("\nThe number of nodes in the linked list is %d\n",count);
	}
}
void delete_first(NODE *node)
{
	start=node->next;
	free(node);
}
void delete_last(NODE *node)
{
	NODE *prev;
	//only one node
	if(node->next==NULL)
	{
		start=NULL;
		free(node);
		return;
	}
	//more than one node
	while(node->next!=NULL)
	{
		prev=node;
		node=node->next;
	}
	prev->next=NULL;
	free(node);
}
void delete_pos(NODE *node)
{
	NODE *prev;
	int key;	
	printf("Enter the node which is to be deleted: ");
	scanf("%d",&key);
	while(node!=NULL)
	{	
		if(node->info==key)
			break;
		prev=node;
		node=node->next;
	}
	if(node==NULL)
	{
		printf("Not a valid node\n");
		return;
	}
	else
	{
		prev->next=node->next;
		free(node);
	}
}
void delete_after(NODE *node)
{
	NODE *temp;
	int key;
	printf("Enter the node value after which you want to delete: ");
	scanf("%d",&key);
	while(node!=NULL)
	{
		if(key==node->info)
			break;
		node=node->next;
	}
	if(node==NULL)
	{
		printf("Not a valid node\n");
		return;
	}
	temp=node->next;
	node->next=temp->next;
	free(temp);
}
