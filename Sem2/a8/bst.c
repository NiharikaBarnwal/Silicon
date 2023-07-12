//Binary Search Tree(BST)
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
NODE *create_node(int);
void preorder(NODE *);
void inorder(NODE *);
void postorder(NODE*);
NODE *search_BST(NODE *, int);
NODE *insert_BST(NODE *,int);
NODE *delete_BST(NODE *, int);
int main()
{
	int opt,key;
	NODE *node=NULL,*temp;
	printf("OPTIONS:\n1=insert  2=search  3=delete  4=preorder  5=inorder  6=postorder  7=exit\n");
	do
	{
		printf("Enter the option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter the number to be inserted:");
				scanf("%d",&key);
				node=insert_BST(node,key);
				break;
			case 2:
				printf("Enter the number to be searched:");
				scanf("%d",&key);
				search_BST(node,key);
				break;
			case 3:
				printf("Enter the number to be deleted:");
				scanf("%d",&key);
				delete_BST(node,key);
				break;
			case 4:
				preorder(node);
				printf("\n");
				break;
			case 5:
				inorder(node);
				printf("\n");
				break;
			case 6:
				postorder(node);
				printf("\n");
				break;
			case 7:
				printf("Thank you!\n");
				break;
			default:
				printf("Invalid option\n");
				break;
		}
	}while(opt!=7);
}
NODE *create_node(int key)
{
	NODE *new=(NODE *)malloc(sizeof(NODE));
	new->data=key;
	new->left=NULL;
	new->right=NULL;
	return new;
}
NODE *insert_BST(NODE *root,int key)
{
	if(root==NULL)
		root=create_node(key);
	else if(key<root->data)
		root->left=insert_BST(root->left,key);
	else if(key>root->data)
		root->right=insert_BST(root->right,key);
	return root;
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
NODE *search_BST(NODE *root, int key)
{
	while(root!=NULL)
	{
		if(key==root->data)
		{
			printf("Key is found\n");
			return root;
		}
		else if(key<root->data)
			root=root->left;
		else
			root=root->right;
	}
	if(root==NULL)
		printf("Key not found\n");
}
NODE *delete_BST(NODE *root,int key)
{
	NODE *temp, *new;
	if(root==NULL)
		printf("Key not found\n");
	else if(key<root->data)
		root->left=delete_BST(root->left,key);
	else if(key>root->data)
		root->right=delete_BST(root->right,key);
	else if(key==root->data)
	{
		//No child
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
		//Only one child
		else if(root->left==NULL || root->right==NULL)
		{
			if(root->left!=NULL)
			{
				temp=root->left;
				free(root);
				return temp;
			}
			else
			{
				temp=root->right;
                free(root);
                return temp;
			}
		}
		//Two children
		else if(root->left!=NULL && root->right!=NULL)
		{
			new=root;
			temp=root->right;
			while(temp->left!=NULL)
			{
				new=temp;
				temp=temp->left;
			}
			if(new!=root)
				new->left=temp->right;
			else
				new->right=temp->right;
			root->data=temp->data;
			free(temp);
			return root;
		}
	}
}
