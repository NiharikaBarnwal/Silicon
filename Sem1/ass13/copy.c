#include<stdio.h>
void copy(char [], char[]);
int main()
{
	char m1[1000],m2[1000];
	printf("Enter the string:");
	scanf("%[^\n]",m1);
	copy(m1,m2);
	printf("%s",m1);
}
void copy(char st1[],char st2[])
{
	int i;
	for(i=0;st1[i]!='\0';i++)
        {
                st2[i]=st1[i];
        }
}
