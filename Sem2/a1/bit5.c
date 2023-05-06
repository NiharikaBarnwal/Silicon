/*Write a user defined function to search for an element in the array by using binary search algorithm. Call it in main() to display the position of the element if it is found, otherwise dispaly suitable error message if it is not found.
Name: Niharika BarnwalRoll no.: 30*/
#include<stdio.h>
void input(int [],int);
int binary_search(int [], int, int);
void display(int [], int);
main()
{
	int n, m[10],p,y;
    printf("Enter size:");
	scanf("%d",&n);
	input(m,n);
	printf("Given array:\n");
	display(m,n);
      printf("\nEnter key:");
	scanf("%d",&y);
	p=binary_search(m,n,y);
	 if(p==-1)
        printf("\nThe value is not present in the array.");
    else
        printf("\nThe value is at the positin %d",p);
}
void input(int a1[], int size)
{
	int i;
	printf("Enter the array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a1[i]);
	}
}
int binary_search(int a[],int siz, int key)
{
	int mid,low=0, high=siz-1;
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
void display(int a2[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a2[i]);
	}
}
