#include<stdio.h>
int main()
{
	int k,x,j,i,arr[100],pos,siz;
	printf("Enter the size");
	scanf("%d",&siz);
	printf("Enter the array:");
	for(i=0;i<siz;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position:");
	scanf("%d",&pos);
	int y=pos;
	for(j=siz-1;j>=pos;j--)
	{
		arr[y]=arr[y+1];
		y++;
	}
	for(k=0;k<siz-1;k++)
	{
		printf("%d ",arr[k]);
		x=x+1;
	}
	printf("No of element is%d",x);
	return 0;
}
