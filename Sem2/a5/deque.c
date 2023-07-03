//Deque
//Niharika Barnwal, 30
#include<stdio.h>
#include<stdbool.h>
#define max 5
int left=-1, right=-1;
int deque[max];
void insertLeft(int);
void insertRight(int);
int deleteLeft();
int deleteRight();
bool isFull();
bool isEmpty();
void display();
int main()
{
	int opt,x;
        printf("Options:\n1=insertLeft  2=deleteLeft  3=deleteRight  4=display  5=exit\n");
        do
        {
                printf("Enter the option:");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 1:
                                printf("Enter the value to be pushed:");
                                scanf("%d",&x);
                                insertLeft(x);
                                break;
			 case 2:
              			printf("Enter the value to be pushed:");
		                scanf("%d",&x);
                		insertRight(x);
		                break;
                        case 3:
				
                                deleteLeft();
                                break;
			case 4:
				deleteRight();
				break;
                        case 5:
                                display();
                                break;
                        case 6:
				printf("Thank you!");
                                break;
			default:
				printf("Invalid option.\n");
				break;
		}

	}while(opt!=6);
}
bool isFull()
{
	if(left==right+1)
		return 1;
	else
		return 0;
}
bool isEmpty()
{
	if(left==-1)
		return 1;
	else
		return 0;
}
void insertLeft(int item)
{
	if (isFull())
		printf("Deque is full.\n");
	else
	{
		if(left==-1)
		{
			left=0;
			right=0;
		}
		else if(left==0)
			left=max-1;
		else
			left--;
		deque[left]=item;
	}
}
void insertRight(int item)
{
    if (isFull())
        printf("Deque is full.\n");
    else
    {
        if(right==-1)
        {
            left=0;
            right=0;
        }
        else if(right==max-1)
            right=0;
        else
            right++;
        deque[right]=item;
    }
}
int deleteLeft()
{
	if(isEmpty())
		printf("Deque is empty\n");
	else
	{
		printf("The deleted element is %d\n",deque[left]);
		if(left==right)
		{
			left=-1;
			right=-1;
		}
		else if(left==max-1)
			left=0;
		else
			left++;
	}
}
int deleteRight()
{
	if(isEmpty())
		printf("Deque is empty\n");
	else
	{
		printf("The deleted element is %d\n",deque[right]);
		if(left==right)
		{
			left=-1;
			right=-1;
		}
		else if(right==0)
			right=max-1;
		else
			right--;
	}
}
void display()
{
	int i;
	if(isEmpty())
		printf("The queue is empty.\n");
	else
	{
		printf("The Deque is:");
		if(left>right)
		{
			for(i=0;i<=right;i++)
				printf("%d ",deque[i]);
			for(i=left;i<max;i++)
				printf("%d ",deque[i]);
		}
		else
		{
			for(i=left;i<=right;i++)
				printf("%d ",deque[i]);
		}
		printf("\n");
	}
}
