#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d\t",5-j);
		}
		printf("\n");
	}
}
