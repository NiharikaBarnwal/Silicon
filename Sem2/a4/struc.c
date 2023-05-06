//Stack by using C structure.
//Niharika Barnwal
//30
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 5
typedef struct
{
	int top;
	int a[max];
}stack;
void create(stack *);
bool IsFull(stack *);
bool IsEmpty(stack *);
void push(stack *, int);
int pop(stack *);
void display(stack *);
int main()
{
	stack *s;
	int x, opt;
	s=(stack *)malloc(sizeof(stack));
	if(s==NULL)
	{
		printf("\nError in memory allocation.");
		exit(0);
	}
	create(s);
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
                                push(s,x);
                                break;
                        case 2:
                                pop(s);
                                break;
                        case 3:
                                display(s);
                                break;
                        case 4:
                                break;
                }
        }while (opt!=4);

}
void create(stack *s)
{
	s->top=-1;
}
bool IsFull(stack *s)
{
	if(s->top==max-1)
		return 1;
	else
		return 0;
}
bool IsEmpty(stack *s)
{
	if(s->top==-1)
		return 1;
	else
		return 0;
}
void push(stack *s, int item)
{
	if (!IsFull(s))
	{
		s->top++;
		s->a[s->top]=item;
	}
	else
		printf("Stack overfolw\n");
}
int pop(stack *s)
{
	int x;
	if(!IsEmpty(s))
	{
		x=s->a[s->top];
		s->top--;
		return x;
	}
	else
		printf("Stack underfow\n");
}
void display(stack *s)
{
	int i;
	if(IsEmpty(s))
		printf("The stack is empty.\n");
	else
	{
		printf("The stack is: ");
		for(i=0;i<=s->top;i++)
			printf("%d",s->a[i]);
		printf("\n");
	}
}
