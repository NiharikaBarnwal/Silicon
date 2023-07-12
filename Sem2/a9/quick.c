//Quick sort
//Niharika Barnwal
#include<stdio.h>
void qs(int [],int,int);
int par(int [],int,int);
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
	qs(a,0,n-1);
	printf("Sorted data:");
	display(a,n);
}
void qs(int a[10],int p,int r)
{
	int q;
	if(p<r)
	{
		q=par(a,p,r);
		qs(a,p,q);
		qs(a,q+1,r);
	}
}
int par(int a[10],int p, int r)
{
	int x=a[p],i=p-1,j=r+1,temp;
	while(1)
	{
		do
		{
			j--;
		}while(a[j]<=x);
		do
		{
			i++;
		}while(a[i]>=x);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
			return j;
	}
}
void display(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
	printf("\n");
}
