#include<stdio.h>
int main()
{
	        float  pv,pm,u,b;
		printf("Enter pv and pm:");
		scanf("%f%f",&pv,&pm);
		u=pm-pv;
		if(u<=100)
			b=u*1.4;
		else if(u>100&&u<=200)
			b=(u-100)*2.5+100*1.4;
		else
			b=(u-200)*3.2+100*2.5+100*1.4;
		printf("bill=%f\n",b);
}
