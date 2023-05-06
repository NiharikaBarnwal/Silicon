#include<stdio.h>
int main()
{
	int x,i,*p;
	printf("Enter the number:");
	p=&x;
	scanf("%d",&x);
	for(i=2;i<*p;i++)
	{
		if(*p%i==0)
		{
			printf("Not a prime");
			break;
		}
	}
	if(i==*p)
	printf("Prime number");
}
