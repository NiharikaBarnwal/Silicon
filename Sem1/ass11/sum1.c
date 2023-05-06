#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("The sum is %d",sum(n));
}
int sum(int a)
{
	int i,s;
	if(a==0||a==1)
		return a;
	else
	{
		s=a+sum(a-1);
		return s;
	}
}
