#include<stdio.h>
void palin(char []);
int main()
{
	char arr[1000];
	printf("Enter the string:");
	scanf("%[^\n]",arr);
	palin(arr);
}
void palin(char m[])
{
	int i,l,x,flag;
	flag=0;
	for(i=0;m[i]!='\0';i++);
	l=i-1;
	x=i-1;
	for(i=0;i<=l/2;i++,x--)
	{
		if(m[i]==m[x])
			flag=1;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("palindrome");
	else
		printf("not a palindrome");
}
