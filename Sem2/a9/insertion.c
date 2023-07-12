//Insertion sort
//Niharika Barnwal
#include<stdio.h>
void insertion(int [],int);
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
	insertion(a,n);
	printf("Sorted data:");
	display(a,n);
}
void insertion(int a[10],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && a[j]>temp;j--)
			a[j+1]=a[j];
		a[j+1]=temp;
	}
}
void display(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
