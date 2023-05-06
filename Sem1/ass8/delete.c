#include<stdio.h>
int main()
{
	int arr[6],j,i;
	printf("enter the array:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr[2]=arr[3];
	arr[3]=arr[4];
	arr[4]=arr[5];
	for(j=0;j<6-1;j++)
	{
		printf("%d ",arr[j]);
	}
}
