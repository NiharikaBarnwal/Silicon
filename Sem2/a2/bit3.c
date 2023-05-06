/*Write a program by using functions to input two matrices and do the matrix addition after checking suitable condition nad then display
Name: Niharika Barnwal
Roll no,: 30*/
#include<stdio.h>
void input(int [][10],int , int);
void add(int [][10], int [][10], int, int,int [][10]);
void display(int [][10], int, int);
main()
{
	int r1,c1,r2,c2,m1[10][10],m2[10][10],m[10][10];
	printf("Enter row size and column size for 1st matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row size and column size for 2nd matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=c2||r1!=r2)
		printf("Cannot be added.");
	else
	{
		input(m1,r1,c1);
		input(m2,r2,c2);
		printf("1st matrix:\n");
		display(m1,r1,c1);
		printf("2nd matrix:\n");
		display(m2,r2,c2);
		add(m1,m2,r1,c1,m);
		printf("Added matrix:\n");
		display(m,r1,c1);
	}
}
void input(int a1[][10], int p, int n)
{
	int i,j;
	printf("Enter the matrix mxn:");
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a1[i][j]);
	}
}
void add(int a1[][10], int a2[][10], int m, int n, int a[][10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			a[i][j]=a1[i][j]+a2[i][j];
	}
}
void display(int a2[][10],int p, int n)
{
	int i,j;
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a2[i][j]);
		printf("\n");
	}
}
