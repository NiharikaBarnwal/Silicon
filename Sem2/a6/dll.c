//Doubly linked list
//NIharika Barnwal
#include<stdio.h>
#include<stdlib.h>
struct dlnode
{
	int info;
	struct dlnode *next;
	struct dlnode *prev;
};
typedef struct dlnode NODE;
void create_dlist(NODE *);
void traverse_dlist(NODE *);
void insert_after(NODE *);
void delete_after(NODE *);
int main()
{
	int opt;
	NODE *node=(NODE *)malloc(sizeof(NODE));
	create_dlist(node);
	printf("Options:\n1=display  2=insert_after  3=delete_after  4=exit\n");
	do
	{
		printf("Enter the option: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				traverse_dlist(node);
				break;
			case 2:
				insert_after(node);
				break;
			case 3:
				delete_after(node);
				break;
			case 4:
				printf("Thank you!\n");
				break;
			default:
				printf("Not a valid option");
				break;
		}
	}while(opt!=4);
}
void create_dlist(NODE *node)
{
	int ch;
	NODE *new;
	printf("Enter the data:");
	scanf("%d",&node->info);
	node->prev=NULL;
	node->next=NULL;
	printf("Press 1 to continue and 0 to exit: ");
	scanf("%d",&ch);
	while(ch!=0)
	{
		new=(NODE *)malloc(sizeof(NODE));
		node->next=new;
		new->prev=node;
		node=node->next;
		printf("Enter the data: ");
		scanf("%d",&node->info);
		node->next=NULL;
		printf("Press 1 to continue and 0 to exit: ");
		scanf("%d",&ch);
	}
}
void traverse_dlist(NODE *node)
{
	NODE *temp;
	printf("DLL in forward direction: ");
	while(node!=NULL)
	{
		temp=node;
		printf("%d ",node->info);
		node=node->next;
	}
	printf("\nDLL in backward direction: ");
	node=temp;
	while(node!=NULL)
	{
		printf("%d ",node->info);
		node=node->prev;
	}
	printf("\n");
}
void insert_after(NODE *node)
{
	int key;
	NODE *new,*temp;
	printf("Enter the node value after which you want to insert: ");
	scanf("%d",&key);
	while(node!=NULL)
	{
		if(key==node->info)
			break;
		node=node->next;
	}
	if(node==NULL)
	{
		printf("Not a valid node");
		return;
	}
	new=(NODE *)malloc(sizeof(NODE));
	if(new==NULL)
	{
		printf("Not enough memory");
		exit(0);
	}
	printf("Enter the value of the new node: ");
	scanf("%d",&new->info);
	if(node->next)
	{
		temp=node->next;
		new->prev=temp->prev;
		temp->prev=new;
		new->next=node->next;
		node->next=new;
	}
	else
	{
		node->next=new;
		new->prev=node;
		new->next=NULL;
	}
}
void delete_after(NODE *node)
{
	NODE *temp, *net;
	int key;
	printf("Enter the node value after which you want to delete: ");
	scanf("%d",&key);
	while(node!=NULL)
	{
		if(node->info==key)
			break;
		node=node->next;
	}
	if(node==NULL)
	{
		printf("Not a valid node\n");
		return;
	}
	if(node->next==NULL)
		printf("No node available after the given node\n");
	else
	{
		temp=node->next;
		if(temp->next)
		{
			net=temp->next;
			net->prev=node;
			node->next=temp->next;
		}
		else
			node->next=NULL;
		free(temp);
	}
}

