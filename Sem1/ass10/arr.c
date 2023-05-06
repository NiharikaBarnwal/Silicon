#include<stdio.h>
int arr_sum(int *,int);
int main()
{
	int i,arr[100],sum;
	printf("Enter an array of 5: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=arr_sum(arr,5);
	printf("%d",sum);
}
int arr_sum(int *m,int n)
{
int j,sum;
	sum=0;
	for(j=0;j<n;j++)
	{
		sum=sum+m[j];
	}
	return sum;
}
