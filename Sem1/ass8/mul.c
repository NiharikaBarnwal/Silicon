#include<stdio.h>
int main()
{
	int a1[3],a2[3],i,j,k,a[3];
	for(j=0;j<3;j++)
	{
		scanf("%d",&a1[j]);
	}
	for(k=0;k<3;k++)
	{
		scanf("%d",&a2[k]);
	}
	for(i=0;i<3;i++)
	{
		a[i]=a1[i]*a2[i];
		printf("%d\n",a[i]);
	}
}
