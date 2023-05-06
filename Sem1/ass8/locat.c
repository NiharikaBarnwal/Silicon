#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i;
	arr[2]=arr[3];
	arr[3]=arr[4];
	for(i=0;i<(5-1);i++)
	{
		printf("%d\n",arr[i]);
	}
}
