#include<stdio.h>
int main()
{
	int arr[100],l,i,j,n,siz;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	siz=n;
	for(j=0;j<n/2;j++)
	{
		siz--;
		arr[j]=arr[j]+arr[siz];
		arr[siz]=arr[j]-arr[siz];
		arr[j]=arr[j]-arr[siz];
	}
	for(l=0;l<n;l++)
	{
		printf("%d ",arr[l]);
	}
	return 0;
}
