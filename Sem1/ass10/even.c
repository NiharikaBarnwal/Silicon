#include<stdio.h>
void odd_eve(int);
int main()
{
	int x,a;
	printf("Enter a number: ");
	scanf("%d",&x);
	odd_eve(x);
}
void odd_eve(int a)
{
	if(a%2==0)
		printf("Even\n");
	else
		printf("Odd\n");
}
