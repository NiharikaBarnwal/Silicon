#include<stdio.h>
int main()
{
	int n,m,a,b,c,d,sum;
	for(m=10;m<=10000;m++)
	{
		a=m%10;
		n=m/10;
		b=n%10;
		n=n/10;
		c=n%10;
		n=n/10;
		d=n%10;
		sum=a+b+c+d;
		if(m%sum==0)
			printf("%d\n",m);
	}
}
