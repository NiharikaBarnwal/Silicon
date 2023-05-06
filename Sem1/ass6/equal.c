#include<stdio.h>
int main()
{
	int x,y,z,i,num,ctr,num1;
	for(i=10;i<=1000;i++)
	{
		num=i;
		num1=i;
		ctr=0;
		while(num>0)
		{
			ctr++;
			num=num/10;
		}
		if(ctr==2)
		{
			x=num1%10;
			y=num1/10;
			if(x==y)
				printf("%d\n",num1);
		}
		if(ctr==3)
		{
			x=num1%10;
			y=num1/10;
			z=y%10;
			y=y/10;
			if(x==y && y==z)
				printf("%d\n",num1);
		}

	}
}
