#include<stdio.h>
struct cricketer
{
	char n[20];
	char c[10];
	int nom;
	int run;
	int w;
	int catch;
};
int main()
{
	struct cricketer p[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("name:");
		scanf("%[^\n]",p[i].n);
		printf("Enter country:");
		scanf(" %[^\n]",p[i].c);
		printf("Enter no. of matches:");
		scanf("%d",&p[i].nom);
		printf("Enter run scored:");
		scanf("%d",&p[i].run);
		printf("Enter wickets taken:");
		scanf("%d",&p[i].w);
		printf("Enter catches taken:");
		scanf("%d",&p[i].catch);
		printf("\n");
	}
	printf("Name\tcountry\tno of matches\trun scored\twickets\tcatches\n");
	for(i=0;i<10;i++)
	        printf("%s\t%s\t%d\t%d\t%d\t%d\n",p[i].n,p[i].c,p[i].nom,p[i].run,p[i].w,p[i].catch);
}

