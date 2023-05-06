#include<stdio.h>
int main()
{
	int i,j,m1[3][3],m2[3][3],m3[3][3];
	printf("Enter 1st matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter 2nd matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	printf("Resultant matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m3[i][j]=m1[i][j]*m2[j][i];
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
}
