#include<stdio.h>
int main()
{
	int l,k,arr[6],i,j,x;
	for(l=0;l<6;l++)
	{
		scanf("%d",&arr[l]);
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	}
	for(k=0;k<6;k++);
	{
		printf("%d ",arr[k]);
	}
	return 0;
}
