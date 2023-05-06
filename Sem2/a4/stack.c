//Functions in stack
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
	int x;
	push(5);
	display();
	push(10);
	push(15);
	display();
	x=pop();
	display();
	push(x);
	push(20);
	push(25);
	display();
	push(30);
	pop();
	pop();
	display();
	pop();
	pop();
	pop();
	pop();
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
		printf("\nStack overflow");
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
		printf("\nStack Underflow");
}
void display()
{
	int i;
	if(IsEmpty)
		printf("The stack is empty.\n");
	else
	{
		printf("\nThe stack is: ");
		for(i=0;i<=top;i++)
			printf("%d ",stack[i]);
	}
}
