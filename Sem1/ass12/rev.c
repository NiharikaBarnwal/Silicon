#include<stdio.h>
int main()
{
	int i,j,len;
	char st[80],x;
	printf("Enter the string:");
	scanf("%[^\n]s",st);
	for(i=0;st[i]!='\0';i++);
	len=i;
	printf("%d",len);
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		x=st[i];
		st[i]=st[j];
		st[j]=x;
	}
	printf("%s",st);
}
