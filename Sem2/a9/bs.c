//Bubble sort
//Niharika Barnwal
#include<stdio.h>
void bs(int [],int);
void display(int [],int);
int main()
{
	int a[10],i,n;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The inputted data:");
	display(a,n);
	bs(a,n);
	printf("Sorted data:");
	display(a,n);
}
void bs(int a[10],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void display(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
