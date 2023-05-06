#include<stdio.h>
#include<math.h>
int main()
{
	float n,n1,a,b,flag;
	int n2,x,y,z;
	flag=1;
	for(n=1000;n<10000;n++)
	{
		n2=n;
		b=n2%100;
		a=n2/100;
		y=sqrt(a);
		z=sqrt(b);
		n1=n;
		x=sqrt(n);
		if(x==sqrt(n)&& y==sqrt(a) && z==sqrt(b))
			printf("%d\n",(int)n1);
	}
}
