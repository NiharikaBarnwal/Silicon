#include<stdio.h>
int main()
{
	int i,j,m1[3][2],m2[3][2],m3[3][2];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
}
