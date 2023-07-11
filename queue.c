#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

void enqueue(int);
void dequeue();
void display();

int queue[SIZE],rear=-1,front=-1;

int main()
{
	int choice,value;
	while(1)
	{
		printf("\n**********MENU************\n1.PUSH\n2.POP\n3.DISPLAY\n4.exit");
		printf("\nenter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the value\n");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:exit(0);
			default:printf("enter correct choice");
		}
	}
	return 0;
}
void enqueue(int value)
{
	if(rear==SIZE-1)
	{
		printf("QUEUE is FULL\n");
	}
	else
	{ 
	if(front==-1)
	{
	front=0;
	}
	rear++;
	queue[rear]=value;
    }
	
}
void dequeue()
{
	if(front==rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("deleted:%d",queue[front]);
		front++;
		if(front==rear)
		front=rear=-1;
	}
}
void display()
{
	if(rear==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d-",queue[i]);
		}
	}
}
