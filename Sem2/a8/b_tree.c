//Binary tree
//Niharika Barnwal,30
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node NODE;
NODE *create();
void preorder(NODE *);
void inorder(NODE *);
void postorder(NODE*);
int main()
{
	int opt;
	NODE *node;
	node=create();
	printf("OPTIONS:\n1=preorder  2=inorder  3=postorder  4=exit\n");
	do
	{
		printf("Enter the option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				preorder(node);
				printf("\n");
				break;
			case 2:
				inorder(node);
				printf("\n");
				break;
			case 3:
				postorder(node);
				printf("\n");
				break;
			case 4:
				printf("Thank you!\n");
				break;
			default:
				printf("Invalid option\n");
				break;
		}
	}while(opt!=4);
}
NODE *create()
{
	int x;
	NODE *new=(NODE *)malloc(sizeof(NODE));
	printf("Enter the data (or -1 for no node): ");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	new->data=x;
	printf("Enter the left child of %d\n",x);
	new->left=create();
	printf("Enter the right child of %d\n",x);
	new->right=create();
	return new;
}
void preorder(NODE *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->data);
		preorder(p->left);
		preorder(p->right);
	}
}
void inorder(NODE *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d ",p->data);
		inorder(p->right);
	}
}
void postorder(NODE *p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d ",p->data);
	}
}
