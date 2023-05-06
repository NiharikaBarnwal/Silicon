#include<stdio.h>
int search(int [],int , int);
main()
{
	int i,m[100],x,y,p;
	printf("Enter size:");
	scanf("%d",&x);
	printf("Enter the elements:");
	for(i=0;i<x;i++)
		scanf("%d",&m[i]);
	printf("Enter key:");
	scanf("%d",&y);
	p=search(m,x,y);
	printf("The position of key is %d",p);
}
int search(int a[],int n, int key)
{
	int mid,low=0, high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]<key)
			low=mid+1;
		else if(a[mid]>key)
			high=mid-1;
		else
		        return mid;
	}
	return -1;
}
