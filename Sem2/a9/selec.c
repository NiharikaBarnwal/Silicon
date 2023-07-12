//Selection sort
//Niharika Barnwal
#include<stdio.h>
void selec_sort(int [],int);
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
	selec_sort(a,n);
	printf("Sorted data:");
	display(a,n);
}
void selec_sort(int a[10],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
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
