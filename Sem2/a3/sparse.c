/*Create the triplet form of a sparse matrix.
Name: Niharika Barnwal
Roll no.:30*/
#include<stdio.h>
#define size 20
void input_matrix(int a[size][size],int m,int n);
void convert_triplet(int a[size][size],int t[size][3],int m,int n);
void output_triplet(int t[size][3]);
int main()
{
	int a[20][20],t[20][3],m,n;
	printf("Enter row size and column size:");
	scanf("%d%d",&m,&n);
	input_matrix(a,m,n);
	convert_triplet(a,t,m,n);
	output_triplet(t);
}
void input_matrix(int a[size][size], int m, int n)
{
	int i,j;
	printf("Enter the matrix:");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void convert_triplet(int a[size][size],int t[size][3],int m,int n)
{
	int i,j,k=1;
	t[0][0]=m;
	t[0][1]=n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				t[k][0]=i;
				t[k][1]=j;
				t[k][2]=a[i][j];
				k++;
			}
		}
	}
	t[0][2]=k-1;
}
void output_triplet(int t[size][3])
{
	int i,j,m;
	m=t[0][2];
	printf("The converted triplet:\n");
	for(i=0;i<=m;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",t[i][j]);
		printf("\n");
	}
}
