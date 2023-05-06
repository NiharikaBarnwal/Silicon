#include<stdio.h>
int main()
{
	int i,j,k,arr[5],max,min,sum;
	float avg;
	sum=0;
	printf("Enter the values:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(j=0;j<5;j++)
	{
		if(max<arr[j])
			max=arr[j];
	}
	for(k=0;k<5;k++)
	{
		if(min>arr[k])
			min=arr[k];
	}
	printf("max is %d\n",max);
	printf("min is %d\n",min);
	avg=sum/5.0;
	printf("avg is %f\n",avg);
}
