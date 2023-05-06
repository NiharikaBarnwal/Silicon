#include<stdio.h>
const int r=4;
const int c=4;
void read(int [][c]);
void display(int [][c]);
void add(int [][c],int [][c],int [][c]);
int main()
{
	int m1[4][4],m2[4][4],m3[4][4];
	read(m1);
	read(m2);
	add(m1,m2,m3);
	display(m3);
}
void read(int a[][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void add(int a1[][c], int a2[][c], int a3[][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a3[i][j]=a1[i][j]+a2[i][j];
		}
	}
}
void display(int a3[][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a3[i][j]);
		}
	}
}
