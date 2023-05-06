#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x;
	float y;
	for(n=1;n<10000;n++)
	{
		y=sqrt(n);
		if(n%2==0)
			for(i=1;i<n;i++)
			{
				if(y==i)
					printf("%d\n",n);
			}
	}
}
