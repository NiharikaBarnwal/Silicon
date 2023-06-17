/*Input two matrices and do the matrix multiplication.
Name: Niharika Barnwal
Roll no.: 30*/
#include<stdio.h>
void input(int [][10],int , int);
void mul(int [][10], int [][10], int, int,int,int,int [][10]);
void display(int [][10], int, int);
main()
{
	int r1,c1,r2,c2,m1[10][10],m2[10][10],m[10][10];
	printf("Enter row size and column size for 1st matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row size and column size for 2nd matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
		printf("Cannot be multiplied.");
	else
	{
		input(m1,r1,c1);
		input(m2,r2,c2);
		printf("1st matrix:\n");
		display(m1,r1,c1);
		printf("2nd matrix:\n");
		display(m2,r2,c2);
		mul(m1,m2,r1,c1,r2,c2,m);
		printf("Multiplied matrix:\n");
		display(m,r1,c2);
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
void mul(int a1[][10], int a2[][10], int m1, int n1,int m2, int n2, int a[][10])
{
	int i,j,k;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
        	{
            	a[i][j]=0;
            	for(k=0;k<n1;k++)
			a[i][j]+=a1[i][k]*a2[k][j];
        	}
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
