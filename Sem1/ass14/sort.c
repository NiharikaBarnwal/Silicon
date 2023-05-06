#include<stdio.h>
void sort(int *,int r);
int main()
{
	int i,n,arr[100];
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void sort(int *m,int r)
{
	int i,j,x,min;
	for(i=0;i<r;i++)
	{	
		for(j=0;j<r-i;j++)
		{
			if (*(m+j)>*(m+j+1))
			{
				x=*(m+j);
				*(m+j)=*(m+j+1);
				*(m+j+1)=x;
			}
		}
	}
}
