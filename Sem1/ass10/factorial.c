#include<stdio.h>
int fact(int);
int main()
{
	int a,x;
	printf("Enter a number: ");
	scanf("%d",&a);
	x=fact(a);
	printf("The factorial is %d",x);
}
int fact(int m)
{
	int i,mul;
	mul=1;
	for(i=1;i<=m;i++)
	{
		mul=mul*i;
	}
	return mul;
}
