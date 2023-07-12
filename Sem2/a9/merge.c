//Merge sort
//Niharika Barnwal
#include<stdio.h>
void merge_sort(int [],int,int);
void merge(int [],int,int,int);
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
	merge_sort(a,0,n);
	printf("Sorted data:");
	display(a,n);
}
void merge_sort(int a[10],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}
void merge(int a[10],int p, int q, int r)
{
	int i=p,j=q+1,k=p,l,b[10];
	while(i<=q && j<=r)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>q)
	{
		for(l=j;l<=r;l++,k++)
			b[k]=a[l];
	}
	else
	{
		for(l=i;l<=q;l++,k++)
			b[k]=a[l];
	}
	for(k=p;k<=r;k++)
		a[k]=b[k];
}
void display(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
