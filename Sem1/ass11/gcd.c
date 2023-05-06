#include<stdio.h>
int gcd(int, int);
int main()
{
	int n1,n2,res;
	printf("Enter two number:");
	scanf("%d%d",&n1,&n2);
	res=gcd(n1,n2);
	printf("GCD is %d",res);
}
int gcd(int a, int b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a>b)
		return gcd(a%b,b);
	else
		return gcd(a,b%a);
}
