#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i;
	for(i=0;i<5;i++)
	{
		if(arr[i]==3)
		{
			arr[i]=33;
			break;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
