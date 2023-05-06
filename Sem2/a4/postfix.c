//Evaluate postfix expression.
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define max 5
int top=-1;
int stack[max];
bool IsFull();
bool IsEmpty();
void push(int);
int pop();
int solve_postfix(char []);
int main()
{
	int val;
	char exp[20];
	printf("Enter the postfix expression:");
	scanf("%[^\n]",exp);
	val=solve_postfix(exp);
	printf("The value is:%d\n",val);
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
int solve_postfix(char exp[])
{
	int i,x,val,op1,op2;
	char symb;
	for(i=0;exp[i]!='\0';i++)
	{
		symb=exp[i];
		if(symb>=48 && symb<=57)
		{
			x=symb-48;
			push(x);
		}
		else if(symb=='+' || symb=='-' || symb=='*' || symb=='/' || symb=='^')
		{
			op1=pop();
			op2=pop();
			switch(symb)
			{
				case '+':
					val=op2+op1;
					break;
				case '-':
					val=op2-op1;
					break;
				case '*':
					val=op2*op1;
					break;
				case '/':
					val=op2/op1;
					break;
				case '^':
					val=pow(op2,op1);
					break;
				default:
					printf("Invalid symbol");
					break;
			}
			push(val);
		}
	}
	return pop();
}
