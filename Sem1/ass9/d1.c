#include<stdio.h>
int main()
{
	int m[5][5],i,j,sum;
	sum=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j)
				sum=sum+m[i][j];
		}
	}
	printf("%d",sum);
}
