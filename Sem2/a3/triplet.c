/*Convert a triplet matrix into a general matrix.
Name:Niahrika Barnwal
Roll no.: 30*/
#include<stdio.h>
#define size 20
void input_triplet(int t[size][3]);
void convert_matrix(int t[size][3], int a[size][size], int m, int n);
void display_matrix(int a[size][size],int m, int n);
int main()
{
	int t[20][3],a[20][20],m,n;
	printf("Enter the triplet matrix:\n");
	input_triplet(t);
	m=t[0][0];
	n=t[0][1];
	convert_matrix(t,a,m,n);
	display_matrix(a,m,n);
}
void input_triplet(int t[size][3])
{
	int i,j;
	scanf("%d%d%d",&t[0][0],&t[0][1],&t[0][2]);
	for(i=1;i<=t[0][2];i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&t[i][j]);
		}
	}
}
void convert_matrix(int t[size][3], int a[size][size], int m, int n)
{
	int i,j,k=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			if(i==t[k][0]&&j==t[k][1])
			{
				a[i][j]=t[k][2];
				k++;
			}
			else
				a[i][j]=0;
	}
}
void display_matrix(int a[size][size],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
