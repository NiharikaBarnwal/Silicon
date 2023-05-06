#include<stdio.h>
int fact(int);
int main()
{
	int n,x;
	printf("Enter a number:");
	scanf("%d",&n);
	x=fact(n);
	printf("Factorial is %d",x);
}
int fact(int a)
{
	int f;
	if(a==0||a==1)
		return 1;
	else
		return a*fact(a-1);
}
