#include<stdio.h>
void reverse(char [],char []);
int main()
{
	char a1[100],a2[100];
	printf("Enter the string:");
	scanf("%[^\n]",a1);
	reverse(a1,a2);
	printf("%s",a2);
}
void reverse(char m1[],char m2[])
{
	int i,l;
	for(i=0;m1[i]!='\0';i++);
	l=i-1;
	for(i=0;m1[i]!='\0';l--,i++)
		m2[l]=m1[i];
}
