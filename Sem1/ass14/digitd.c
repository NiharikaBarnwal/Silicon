#include<stdio.h>
int main()
{
	int n,i=0,*p;
	printf("Enter the number:");
	scanf("%d",&n);
	p=&n;
	while(*p>0)
	{
		*p=(*p)/10;
		i++;
	}
	printf("The number of digits are:%d",i);
}
