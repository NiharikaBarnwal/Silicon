#include<stdio.h>
int main()
{
	int i;
	char st1[99],st2[99];
	printf("Enter the string:");
	scanf("%[^\n]s",st1);
	for(i=0;st1[i]!='\0';i++)
	{
		st2[i]=st1[i];
	}
	printf("%s",st2);
}
