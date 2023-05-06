#include<stdio.h>
int main()
{
	int x,dg,i,num,flag,num1;
	for(i=10;i<=10000;i++)
	{
		num=i;
		num1=i;
		flag=1;
		x=num%10;
		while(num>0)
		{
			dg=num%10;
			if(dg!=x)
			{
				flag=0;
				break;
			}
			num=num/10;
		}
		if(flag==1)
			printf("%d\n",num1);

	}
}
