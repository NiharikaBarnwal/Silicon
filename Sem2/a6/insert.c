//Insert function in linked list
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
void insert_beg(NODE *);
void insert_end(NODE *);
void insert_pos(NODE *);
void insert_after(NODE *);
int main()
{
	NODE *node=(NODE *)malloc(sizeof(NODE));
	int opt;
	createList(node);
	printf("Option\n1=display  2=insert at beginning  3=insert at end  4=insert at a given position  5=insert after a specific node  6=exit\n");
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
				insert_beg(node);
				node=start;
				break;
			case 3:
				insert_end(node);
				break;
			case 4:
				insert_pos(node);
				break;
			case 5:
				insert_after(node);
				break;
			case 6:
				printf("Thank you!");
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
	printf("Linked list:");
	while(node!=NULL)
	{
		printf("%d ",node->info);
		node=node->next;
		count++;
	}
	printf("\nThe number of nodes in the linked list is %d\n",count);
}
void insert_beg(NODE *node)
{
	NODE *new=(NODE *)malloc(sizeof(NODE));
	if(new==NULL)
	{
		printf("Not enough memory\n");
		exit(0);
	}
	printf("Enter the node info:");
	scanf("%d",&new->info);
	new->next=node;
	start=new;
}
void insert_end(NODE *node)
{
	NODE *new=(NODE *)malloc(sizeof(NODE));
	if(new==NULL)
	{
		printf("Not enough memory\n");
		exit(0);
	}
	printf("Enter the node info:");
	scanf("%d",&new->info);
	while(node->next!=NULL)
		node=node->next;
	node->next=new;
	new->next=NULL;
}
void insert_pos(NODE *node)
{
	NODE *new;
	int count=0,pos;
	printf("Enter the position at which node is to be inserted: ");
	scanf("%d",&pos);
	while(node->next!=NULL)
	{
		count++;
		if(count==pos-1)
		{
			break;
		}
		node=node->next;
	}
	if(node->next==NULL)
	{
		printf("Not a valid node position\n");
		return;
	}
	new=(NODE *)malloc(sizeof(NODE));
	if(new==NULL)
	{
		printf("Not enough memory\n");
		exit(0);
	}
	printf("Enter the node info: ");
	scanf("%d",&new->info);
	new->next=node->next;
	node->next=new;
}
void insert_after(NODE *node)
{
	NODE *new;
	int key;
	printf("Enter the node value after which we want to insert the nod: ");
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
	new=(NODE *)malloc(sizeof(NODE));
	if(new==NULL)
	{
		printf("Not enough memory\n");
		exit(0);
	}
	printf("Enter the node info: ");
	scanf("%d",&new->info);
	new->next=node->next;
	node->next=new;
}
