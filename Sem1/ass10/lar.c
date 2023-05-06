#include<stdio.h>
int lar(int,int,int);
int main()
{
	int x,y,z,result;
	printf("Enter three number: ");
	scanf("%d%d%d",&x,&y,&z);
	result=lar(x,y,z);
	printf("The largest among 3 no is %d\n",result);
}
int lar(int m,int n,int o)
{
	int a;
	a=m>n?(m>o?m:o):(n>o?n:o);
	return a;
}
