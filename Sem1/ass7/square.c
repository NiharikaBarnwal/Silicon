#include<stdio.h>
int main()
{
	int x,y,n1,n2,a,b,l,m,n,q;
	for(n1=10;n1<100;n1++)
	{
		x=n1%10;
		y=n1/10;
		n2=x*10+y;
		a=n1*n1;
		b=n2*n2;
		l=a%10;
		a=a/10;
		m=a%10;
		n=a/10;
		q=(l*100)+(m*10)+n;
		if(q==b)
			printf("%d\n",n1);
	}
}
