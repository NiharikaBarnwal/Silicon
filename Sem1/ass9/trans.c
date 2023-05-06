#include<stdio.h>
int main()
{
	int i,j,m1[4][3],m2[4][4];
	printf("Enter the array of 4*3:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			m2[j][i]=m1[i][j];
		}
	}
	printf("The transposed matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{

			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
}
