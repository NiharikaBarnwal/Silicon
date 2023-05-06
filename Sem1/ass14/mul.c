#include<stdio.h>
int main()
{
	int *p,a,i;
	printf("Enter the number:");
	scanf("%d",&a);
	p=&a;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",*p,i,(*p)*i);
	}
}
