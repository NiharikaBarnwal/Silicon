#include<stdio.h>
int main()
{
	int m[5][5],i,j,sum;
	sum=0;
	printf("Entet the matrix: ");
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
			if(i+j==5-1)
				sum=sum+m[i][j];
		}
	}
	printf("The sum is %d",sum);
}
