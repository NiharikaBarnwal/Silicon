#include<stdio.h>
int main()
{
	int arr[6],i,j,k,l;
	printf("Enter the array:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0)
			printf("%d,",arr[i]);

	}
	printf("are odd number\n");
	for(j=0;j<6;j++)
	{
		if(arr[j]%2==0)
			printf("%d, ",arr[j]);
	}
	printf("are even number\n");
	for(k=0;k<6;k++)
	{
		if(arr[k]<0)
			printf("%d, ",arr[k]);
	}
	printf("are negative no\n");
	for(l=0;l<6;l++)
	{
		if(arr[l]>0)
			printf("%d, ",arr[l]);
	}
	printf("are positive no\n");

}
