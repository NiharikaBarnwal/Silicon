#include<stdio.h>
int main()
{
	int a,b,i,n;
	printf("Enter the range:");
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
	{
		for(i=2;i<b;i++)
		{
			if(a%i==0)
				break;
		}
		if(i==a)
			printf("%d\n",a);
	}
}
