#include<stdio.h>
int main()
{
	int i,marks[5];
	printf("Enter the marks:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
		printf("%d\t",marks[i]);
	}
}
