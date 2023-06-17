/*Read a 2D array and display it in matrix format.
Name: Niharika Barnwal
Roll no.: 30*/
#include<stdio.h>
void input(int [][10],int , int);
void display(int [][10], int, int);
main()
{
	int r,c,m[10][10];
    printf("Enter row size:");
	scanf("%d",&r);
	printf("Enter the column size:");
	scanf("%d",&c);
	input(m,r,c);
	printf("Given matrix:\n");
	display(m,r,c);
}
void input(int a1[][10], int row, int column)
{
	int i,j;
	printf("Enter the matrix mxn:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
			scanf("%d",&a1[i][j]);
	}
}
void display(int a2[][10],int row, int column)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
			printf("%d ",a2[i][j]);
		printf("\n");
	}
}
