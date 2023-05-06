//Linear array
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdbool.h>
#define max 4 
int rear=-1, front=0;
int queue[max];
bool IsFull();
bool IsEmpty();
void insert(int item);
int delete();
void display();
int main()
{
	int opt,x;
        printf("Options:\n1=insert  2=delete  3=display  4=exit\n");
        do
        {
                printf("Enter the option:");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 1:
                                printf("Enter the value to be pushed:");
                                scanf("%d",&x);
                                insert(x);
                                break;
                        case 2:
                                delete();
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                break;
                }
        }while (opt!=4);
}
bool IsFull()
{
	if(rear==max-1)
		return 1;
	else
		return 0;
}
bool IsEmpty()
{
	if(rear<front)
		return 1;
	else return 0;
}
void insert(int item)
{
	if(!IsFull())
	{
		rear++;
		queue[rear]=item;
	}
	else
		printf("Queue overflow\n");
}
int delete()
{
	int x;
	if(!IsEmpty())
	{
		x=queue[front];
		front++;
		return x;
	}
	else
		printf("Queue underflow\n");
}
void display()
{
	int i;
	if(IsEmpty())
		printf("The queue is empty.\n");
	else
	{
		printf("The Queue is:");
		for(i=front; i<=rear;i++)
			printf("%d ",queue[i]);
		printf("\n");
	}
}
