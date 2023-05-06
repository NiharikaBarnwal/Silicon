#include<stdio.h>
void prime(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	prime(n);
}
void prime(int a)
{
	int i,flag;
	flag=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
		else
			flag=0;
	}
	if(flag==0)
		printf("prime");
	else
		printf("not a prime");
}
