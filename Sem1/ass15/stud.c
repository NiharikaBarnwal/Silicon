#include<stdio.h>
struct address
{
	int pin;
	char city[10];
};
struct student
{
	char name[20];
	int roll;
	struct address a[10];
	int mark1;
	int mark2;
	int mark3;
};
int main()
{
	int i;
	struct student s[10];
	for(i=0;i<10;i++)
	{
		printf("Enter name:");
		scanf("%[^\n]",s[i].name);
		printf("Enter roll no.:");
		scanf("%d",&s[i].roll);
		printf("Enter pin:");
		scanf("%d",&s[i].a[i].pin);
		printf("Enter city:");
		scanf(" %[^\n]",s[i].a[i].city);
		printf("Enter mark1:");
		scanf("%d",&s[i].mark1);
		printf("Enter mark2:");
		scanf("%d",&s[i].mark2);
		printf("Enter mark2:");
		scanf("%d",&s[i].mark3);
		printf("\n");
	}
	printf("Name\troll\tpin\tcity\tmark1\tmark2\tmark3\n");
	for(i=0;i<10;i++)
		printf("%s\t%d\t%d\t%s\t%d\t%d\t%d\n",s[i].name,s[i].roll,s[i].a[i].pin,s[i].a[i].city,s[i].mark1,s[i].mark2,s[i].mark3);
	int max=s[0].mark3;
	for(i=0;i<10;i++)
	{
		if(s[i].mark3>max)
			max=s[i].mark3;
	}
	for(i=0;i<10;i++)
	{
		if(max==s[i].mark3)
			printf("%s\t%d\t%d\t%s\t%d\t%d\t%d\n",s[i].name,s[i].roll,s[i].a[i].pin,s[i].a[i].city,s[i].mark1,s[i].mark2,s[i].mark3);
	}
}
