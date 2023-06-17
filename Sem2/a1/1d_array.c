/*Pass an array and input elements into it,and then display the elements.
Name: Niharika Barnwal
Roll no.: 30*/
#include<stdio.h>
void input(int [],int);
void display(int [], int);
main()
{
	int n, m[10];
    printf("Enter size:");
	scanf("%d",&n);
	input(m,n);
	printf("Given array:\n");
	display(m,n);
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
void display(int a2[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a2[i]);
	}
}
