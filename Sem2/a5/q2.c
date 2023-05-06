//Circular queue 
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
	display();
	insert(5);
	display();
	delete();
	display();
	delete();
	insert(5);
	display();
	insert(10);
	display();
	insert(15);
	display();
	insert(20);
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
