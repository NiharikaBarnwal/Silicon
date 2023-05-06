#include<stdio.h>
float area(int);
int main()
{
	int r;
	float a;
	printf("Enter the radius: ");
	scanf("%d",&r);
	a=area(r);
	printf("The area of the cirle is %f",a);
}
float area(int l)
{
	float z;
	z=3.14*l*l;
	return z;
}
