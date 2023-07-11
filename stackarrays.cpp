#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

void push(int);
void pop();
void display();

int stack[SIZE],top=-1;

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
				push(value);
				break;
			case 2:
				pop();
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

void push(int value)
{
	if(top==SIZE-1)
	{
	printf("Stack is full\n INsertion is not possible");
    }
	else
	{
	top++;
	stack[top]=value;
	printf("\nINSERTION is Success");
    }
}
void pop()
{
	if(top==-1)
	{
		printf("\nSTACK is EMPTY");
	}
	else
	{
		printf("Deleted:%d",stack[top]);
		top--;
	}
}
void display()
{
	
	if(top==-1)
	{
		printf("\nSTACK is EMPTY");
	}
	else
	{
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	
}
