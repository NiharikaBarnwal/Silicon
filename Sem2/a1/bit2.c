/*Write a user defined function to insert anelement from the array that is passed to it as function argument.
Name: Niharika Barnwal
Roll no.:30*/
#include<stdio.h>
void input(int [],int);
void insert(int [], int, int,int);
void display(int [], int);
main()
{
	int n,p,v, m[10];
    printf("Enter size:");
	scanf("%d",&n);
	input(m,n);
    printf("Enter the position:");
    scanf("%d",&p);
    printf("Enter the value:");
    scanf("%d",&v);
	insert(m,n,p,v);
    printf("New array:\n");
	display(m,n);
}
void input(int a1[], int m)
{
	int i;
	
	printf("Enter the array:");
	for(i=0;i<m;i++)
		scanf("%d",&a1[i]);
}
void insert(int a[], int siz, int pos, int val)
{
    int i;
    for(i=siz-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=val;
}
void display(int a2[],int m)
{
	int i;
	for(i=0;i<m+1;i++)
		printf("%d ",a2[i]);
}
