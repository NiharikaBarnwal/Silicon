#include<stdio.h>
int main()
{
	int c1,c2,c3,hard,ten;
	float car;
	printf("Enter the hardness:");
	scanf("%d",&hard);
	printf("Enter the carbon content:");
	scanf("%f",&car);
	printf("Enter the tensile strength");
	scanf("%d",&ten);
	c1=hard>50;
	c2=car<0.7;
	c3=ten>5600;
	if(c1==1&&c2==1&&c3==1)
		printf("grade 10");
	else if(c1==1&&c2==1)
		printf("grade 9");
	else if(c2==1&&c3==1)
		printf("grade 8");
	else if(c1==1&&c3==1)
		printf("grade 7");
	else if(c1==1||c2==1||c3==1)
		printf("grade 6");
	else
		printf("grade 5");
}
