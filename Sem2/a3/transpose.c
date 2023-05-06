/*Write a program to find the transpose of a sparse matrix using triplet form.
  Niharika Barnwal, 30*/
#include<stdio.h>
#define size 20
void read_matrix(int a[size][size],int m,int n);
void create_triplet(int a[size][size],int t[size][3],int m,int n);
void transpose_sparse(int a[size][3], int b[size][3]);
void display_sparse(int b[size][3]);
int main()
{
       int a[20][20],t2[20][3],t1[20][3],m,n;
        printf("Enter row size and column size:");
        scanf("%d%d",&m,&n);
        read_matrix(a,m,n);
        create_triplet(a,t1,m,n);
	transpose_sparse(t1,t2);
        display_sparse(t2);
}
void read_matrix(int a[size][size], int m, int n)
{
        int i,j;
        printf("Enter the matrix:");
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                      scanf("%d",&a[i][j]);
}
void create_triplet(int a[size][size],int t[size][3],int m,int n)
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
void transpose_sparse(int a[size][3], int b[size][3])
{
	int i, j, k=1;
	b[0][0]=a[0][1];
	b[0][1]=a[0][0];
	b[0][2]=a[0][2];
	for(i=0;i<a[0][1];i++)
	{
		for(j=1;j<=a[0][2];j++)
		{
			if(a[j][1]==i)
			{
				b[k][0]=a[j][1];
				b[k][1]=a[j][0];
				b[k][2]=a[j][2];
				k++;
			}
		}
	}
}
void display_sparse(int t[size][3])
{
        int i,j,m;
        m=t[0][2];
        printf("The  tnsposed triplet:\n");
        for(i=0;i<=m;i++)
        {
                for(j=0;j<3;j++)
	                printf("%d ",t[i][j]);
                printf("\n");
        }
}

