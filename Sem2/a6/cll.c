//Circular linked list
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
void create(NODE *node);
void traverse(NODE *node);
void insert_after(NODE *node);
void delete_after(NODE *node);
int main()
{
	int opt;
	NODE *node=(NODE *)malloc(sizeof(NODE));
	start=node;
	create(node);
	printf("Options:\n1=display  2=insert_after 3=delete_after  4=exit\n");
	do
	{
		printf("Enter the option: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				traverse(node);
				break;
			case 2:
				insert_after(node);
				break;
			case 3:
				delete_after(node);
				node=start;
				break;
			case 4:
				break;
			default:
				printf("Not a valid option\n");
				break;
		}
	}while(opt!=4);
}
void create(NODE *node)
{
	int ch;
	printf("Enter the data: ");
	scanf("%d",&node->info);
	node->next=start;
	printf("Press 1 to continue and 0 to exit: ");
	scanf("%d",&ch);
	while(ch!=0)
	{
		node->next=(NODE *)malloc(sizeof(NODE));
		node=node->next;
		printf("Enter the data: ");
		scanf("%d",&node->info);
		node->next=start;
		printf("Press 1 to continue and 0 to exit: ");
		scanf("%d",&ch);
	}
}
void traverse(NODE *node)
{
	printf("The linked list is: ");
	do
	{
		printf("%d ",node->info);
		node=node->next;
	}while(node!=start);
	printf("\n");
}
void insert_after(NODE *node)
{
	int key;
	NODE *new=(NODE *)malloc(sizeof(NODE));
	printf("Enter the key after which you want to insert: ");
	scanf("%d",&key);
	do
	{
		if(node->info==key)
			break;
		node=node->next;
	}while(node!=start);
	if(node->info!=key)
		printf("Not a valid node.\n");
	else
	{
		printf("Enter the node value: ");
		scanf("%d",&new->info);
		if(node->next==start) //insertion after last node
		{
			node->next=new;
			new->next=start;
		}
		else //insertion between 1st and last node
		{
			new->next=node->next;
			node->next=new;
		}
	}
}
void delete_after(NODE *node)
{
	NODE *temp;
	int key;
	printf("Enter the key after which you want to delete: ");
	scanf("%d",&key);
	do
	{
		if(node->info==key)
			break;
		node=node->next;
	}while(node!=start);
	if(node->info!=key)
		printf("Not a valid node\n");
	else
	{
		if(node->next==start)
		{
			temp=start;
			node->next=start->next;
			start=start->next;
		}
		else
		{
			temp=node->next;
			node->next=temp->next;
		}
		free(temp);
	}
}
