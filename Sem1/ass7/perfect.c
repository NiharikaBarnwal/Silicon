#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("Enter the range:");
	scanf("%d%d",&i,&n);
	for(i;i<n;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s=j+s;
			}
		}
		if(s==i)
			printf("%d\n",i);
	}
}
