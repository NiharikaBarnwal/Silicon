#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("1st number =%d\t2nd number=%d\n",a,b);
}
void swap(int *x, int *y)
{
	int m;
	m=*x;
	*x=*y;
	*y=m;
}
