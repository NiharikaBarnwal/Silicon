#include<stdio.h>
int len_arr(char []);
int main()
{
	char arr[100];
	int x;
	printf("Enter the string:");
	scanf("%[^\n]s",arr);
	x=len_arr(arr);
	printf("The length = %d\n",x);
}
int len_arr(char m[])
{
	int i;
	for(i=0;m[i]!='\0';i++);
	return i;
}
