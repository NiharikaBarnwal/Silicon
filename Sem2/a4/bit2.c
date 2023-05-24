//Functions in stack as asked by user
//Niharika Barnwal
//30
#include<stdio.h>
#include<stdbool.h>
#define max 5
int top=-1;
int stack[max];
bool IsFull();
bool IsEmpty();
void push(int);
int pop();
void display();
int main()
{
	int opt,x;
	printf("Options:\n1=push  2=pop  3=display  4=exit\n");
	do
	{
		printf("Enter the option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter the value to be pushed:");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
		}
	}while (opt!=4);
}
bool IsFull()
{
	if(top==max-1)
		return 1;
	else
		return 0;
}
bool IsEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void push(int item)
{
	if(!IsFull())
	{
		top++;
		stack[top]=item;
	}
	else
		printf("Stack overflow\n");
}
int pop()
{
	if (!IsEmpty())
	{
		int x;
		x=stack[top];
		top--;
		return x;
	}
	else
		printf("Stack Underflow\n");
}
void display()
{
	int i;
	if (IsEmpty())
		printf("The stack is empty.\n");
	else
	{
		printf("The stack is: ");
		for(i=0;i<=top;i++)
			printf("%d ",stack[i]);
		printf("\n");
	}
}
