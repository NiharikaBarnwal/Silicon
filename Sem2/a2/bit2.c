/*Write a program by using functions to input a matrix, transpose it and dispaly the transposed matrix.
Name: Niharika Barnwal
Roll no. 30*/
#include<stdio.h>
void input(int [][10],int , int);
void trans(int [][10], int [][10], int, int);
void display(int [][10], int, int);
main()
{
	int r,c,m1[10][10],m2[10][10];
	printf("Enter row size:");
	scanf("%d",&r);
	printf("Enter the column size:");
	scanf("%d",&c); 
	input(m1,r,c);
	trans(m1,m2,r,c);
	printf("Actual matrix:\n");
	display(m1,r,c);
	printf("Transposed matrix:\n");
	display(m2,c,r);
}
void input(int a1[][10], int m, int n)
{
	int i,j;
	printf("Enter the matrix mxn:");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a1[i][j]);
}
void trans(int a1[][10], int a2[][10], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			a2[j][i]=a1[i][j];
}
void display(int a2[][10],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a2[i][j]);
		printf("\n");
	}
}
