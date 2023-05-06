#include<stdio.h>
int main()
{
	int a,b,c,*p,*q;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=*p+*q;
	printf("Addition value=%d\n",c);
}
