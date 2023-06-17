/*Search an element in the array by using linear search algorithm.
Nmae: Niharika Barnwal
Roll no.: 30*/
#include<stdio.h>
void input(int [],int);
int linear_search(int [],int , int);
void display(int [], int);
main()
{
	int s,p, m[10],v;
    printf("Enter size:");
	scanf("%d",&s);
	input(m,s);
    printf("Enter the value to be searched:");
    scanf("%d",&v);
    p=linear_search(m,s,v);
	printf("Given array:\n");
	display(m,s);
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
int linear_search(int a[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            return i;
    }
    if(i==n)
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
