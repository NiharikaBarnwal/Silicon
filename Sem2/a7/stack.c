//Implementation of Stack using linked list
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node NODE;
NODE *push(NODE *top);
NODE *pop(NODE *top);
void traverse(NODE *top);
int main()
{
    int opt;
    NODE *top=NULL;
    printf("OPTION:\n1=push 2=pop 3=display 4=exit\n");
    do
    {
        printf("Enter the option: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                top=push(top);
                break;
            case 2:
                top=pop(top);
                break;
            case 3:
                traverse(top);
                break;
            case 4:
                printf("Thank you!");
                break;
            defaut:
                printf("Invalid option");
                break;
        }
    } while (opt!=4);
}
NODE *push(NODE *top)
{
    NODE *temp=(NODE *)malloc(sizeof(NODE));
    printf("Enter the data:");
    scanf("%d",&temp->info);
    temp->next=top;
    return temp;
}
NODE *pop(NODE *top)
{
    NODE *temp;
    if(top==NULL)
        printf("Stack underflow\n");
    else
    {
        temp=top;
        top=top->next;
        free(temp);
        return top;
    }
}
void traverse(NODE *top)
{
    printf("The stack is: ");
    if(top==NULL)
        printf("empty");
    else
    {
        while(top!=NULL)
        {
            printf("%d ",top->info);
            top=top->next;
        }
    }
    printf("\n");
}