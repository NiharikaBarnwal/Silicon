#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	printf("Enter the numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	x=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
	printf("The largest number is:%d\n",x);
}
