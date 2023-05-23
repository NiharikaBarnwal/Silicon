//Evaluate infix expression by converting to postfix
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
int precedence(char x);
void convert_postfix(char infix[], char postfix[]);
int main()
{
	int val;
	char exp1[20],exp2[20];
	printf("Enter the infix expression:");
	scanf("%[^\n]",exp1);
	convert_postfix(exp1,exp2);
	val=solve_postfix(exp2);
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
int precedence(char x)
{
        if(x=='(')
                return 0;
        if(x=='+' || x=='-')
                return 1;
        if(x=='*' || x=='/' || x=='%')
                return 2;
        return 4; //'^'
}
void convert_postfix(char infix[20], char postfix[20])
{
        int i,j=0,x;
        char symb;
        for(i=0;infix[i]!='\0';i++)
        {
                symb=infix[i];
                if((symb>=65 && symb<=91) || (symb>=48 && symb<=57) || (symb>=97 && symb<=122))
                {
                        postfix[j]=infix[i];
                        j++;
                }
                else if(symb=='(')
                        push(symb);
                else if(symb==')')
                {
                        x=pop();
                        while(x!='(')
                        {
                                postfix[j++]=x;
                                x=pop();
                        };
                }
                else
                {

                        while((precedence(symb)<=precedence(stack[top])) && !IsEmpty())
                        {
                                x=pop();
                                postfix[j]=x;
                                j++;
                        }
                        push(symb);

                }
        }
        while(!IsEmpty())
        {
                x=pop();
                postfix[j]=x;
                j++;
        }
        postfix[j]='\0';
}
