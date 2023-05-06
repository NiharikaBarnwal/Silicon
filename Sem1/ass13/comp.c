#include<stdio.h>
void comp(char [],char []);
int main()
{
        char m1[99],m2[99];
        printf("Enter 1st string:");
        scanf("%[^\n]s",m1);
        printf("Enter 2nd string:");
        scanf(" %[^\n]s",m2);
	comp(m1,m2);
}
void comp(char st1[],char st2[])
{
	int i=0;
       	while(st1[i]==st2[i] && st1[i]!='\0' && st2[i]!='\0')
         {
 	        i++;
	 }
         if(st1[i]=='\0'&& st2[i]=='\0')
         printf("Matching string");
         else
         printf("Non-matching string");
}

