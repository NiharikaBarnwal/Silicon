#include<stdio.h>
struct cricketer
{
        char n[20];
        char a[10];
        int bn;
        int price;
        char pub[30];
};
int main()
{
        struct cricketer p[10];
        int i;
        for(i=0;i<10;i++)
        {
                printf("name:");
                scanf("%[^\n]",p[i].n);
                printf("Enter author:");
                scanf(" %[^\n]",p[i].a);
                printf("Enter book no.:");
                scanf("%d",&p[i].bn);
                printf("Enter price:");
                scanf("%d",&p[i].price);
                printf("Enter publisher:");
                scanf(" %[^\n]",&p[i].pub);
                printf("\n");
        }
        printf("Name\tcountry\tno of matches\trun scored\twickets\tcatches\n");
        for(i=0;i<10;i++)
	        printf("%s\t%s\t%d\t%d\t%s\n",p[i].n,p[i].c,p[i].nom,p[i].run,p[i].w,p[i].catch);
}

