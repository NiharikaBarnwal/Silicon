#include<stdio.h>
int sum(int,int);
int main()
{
	int s,x,y;
	printf("Enter two number: ");
	scanf("%d%d",&x,&y);
	s=sum(x,y);
	printf("Sum = %d\n",s);
}
int sum(int m, int n)
{
	return m+n;
}
