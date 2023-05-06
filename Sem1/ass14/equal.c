#include<stdio.h>
int main()
{
	int *p,i,x,d,l,flag,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		flag=0;
		p=&i;
		l=(*p)%10;
		while(*p>0)
		{
			d=(*p)%10;
			if(d!=l)
			{
				flag=1;
				break;
			}
			*p=*p/10;
		}
		if(flag==0)
			printf("%d",i);		
	}
}
