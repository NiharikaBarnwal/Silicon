//Implementation of queue using linked list
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
NODE *front=NULL, *rear=NULL;
void insert();
void delete();
void display();
int main()
{
    int opt;
    NODE *top=NULL;
    printf("OPTION:\n1=insert 2=delete 3=display 4=exit\n");
    do
    {
        printf("Enter the option: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    } while (opt!=4);
}
void insert()
{
    NODE *new=(NODE *)malloc(sizeof(NODE));
    printf("Enter the data:");
    scanf("%d",&new->info);
    if(front==NULL)
    {
        front=new;
        rear=new;
        new->next=NULL;
    }
    else
    {
        rear->next=new;
        rear=new;
        rear->next=NULL;
    }
}
void delete()
{
    NODE *new;
    new=front;
    if(front==NULL)
        printf("Queue underflow\n");
    else
    {
        if(front==rear)
        {
            front=NULL;
            rear=NULL;
        }
        else
            front=front->next;
        free(new);
    }
}
void display()
{
    NODE *temp;
    temp=front;
    printf("The queue is:");
    if(temp==NULL)
        printf("empty");
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->info);
            temp=temp->next;
        }
    }
    printf("\n");
}