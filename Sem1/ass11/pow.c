#include<stdio.h>
int power(int,int);
int main()
{
	int n,p;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&p);
	printf(" the result is %d",power(n,p));
}
int power(int a, int b)
{
	int z;
	if(b==0)
		return 1;
	else
	{
		z=a*power(a,b-1);
		return z;
	}
}
