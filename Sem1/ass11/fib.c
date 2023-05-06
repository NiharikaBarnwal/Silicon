#include<stdio.h>
int fibo(int);
int main()
{
	int i,n,x;
	printf("Enter the length of series:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d,",fibo(i));
	}
}
int fibo(int a)
{
	int z;
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
	{
		z=fibo(a-1)+fibo(a-2);
		return z;
	}
}
