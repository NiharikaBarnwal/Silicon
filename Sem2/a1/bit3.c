/*Write a user defined function to delete an element from the array that is passed to it as function argument.
Name: Niahrika Barnwal
Roll no.:30*/
#include<stdio.h>
void input(int [],int);
void delete(int [], int, int);
void display(int [], int);
main()
{
	int n,p, m[10];
    printf("Enter size:");
	scanf("%d",&n);
	input(m,n);
    printf("Enter the position:");
    scanf("%d",&p);
	delete(m,n,p);
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
void delete(int a[], int siz, int pos)
{
    int i;
    for(i=pos;i<siz-1;i++)
        a[i]=a[i+1];
}
void display(int a2[],int m)
{
	int i;
	for(i=0;i<m-1;i++)
		printf("%d ",a2[i]);
}
