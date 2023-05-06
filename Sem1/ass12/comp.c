#include<stdio.h>
int main()
{
	int i=0;
	char st1[99],st2[99];
	printf("Enter 1st string:");
	scanf("%[^\n]s",st1);
	printf("Enter 2nd string:");
	scanf(" %[^\n]s",st2);
	while(st1[i]==st2[i] && st1[i]!='\0' && st2[i]!='\0')
	{
		i++;
	}
	if(st1[i]=='\0'&& st2[i]=='\0')
		printf("Matching string");
	else
		printf("Non-matching string");
}
