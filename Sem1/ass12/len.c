#include<stdio.h>
int main()
{
	int i;
	char st[80];
	printf("Enter the string:");
	scanf("%[^\n]s",st);
	for(i=0;st[i]!='\0';i++);
	printf("The length is %d",i);
}
