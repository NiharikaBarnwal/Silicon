//Circular queue (Menu driven)
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdbool.h>
#define max 4 
int rear=0, front=0;
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
				printf("Thank you!");
                                break;
			default:
				printf("Invalid option\n");
				break;
                }
        }while (opt!=4);
}
bool IsFull()
{
	if(rear==front)
		return 1;
	else
		return 0;
}
bool IsEmpty()
{
	if(rear==front)
		return 1;
	else return 0;
}
void insert(int item)
{
	if(rear==max-1)
		rear=0;
	else
		rear++;
	if(IsFull())
	{
		printf("Queue overflow\n");
		if(rear==0)
			rear=max-1;
		else
			rear--;
	}
	else
		queue[rear]=item;
}
int delete()
{
	if(IsEmpty())
		printf("Queue underflow\n");
	else if(front==max-1)
		front=0;
	else
		front++;
	return queue[front];
}
void display()
{
	int i;
	if(IsEmpty())
		printf("The queue is empty.\n");
	else
	{
		printf("The Queue is:");
		if (front<=rear)
		{
			for(i=front+1; i<=rear;i++)
				printf("%d ",queue[i]);
		}
		else
		{
			for(i=front+1;i<max;i++)
				printf("%d ",queue[i]);
			for(i=0;i<=rear;i++)
				printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
