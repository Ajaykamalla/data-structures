#include<stdio.h>
#include<stdlib.h>>
#define SIZE 3
struct Node
{
	int data;
	struct Node *next;
}*top=NULL;
void push(int);
void pop();
void display();



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
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;	
	if(top==NULL)
	{
		newnode->next=NULL;
		
	
	}
	else
	{
		newnode->next=top;
} 
	top=newnode;
		printf("insertion");
	
}
void pop()
{
	if(top==NULL)
	{
		printf("\nstack is empty!!!\n");
	}
	else
	{
		struct Node *temp=top;
		printf("\nDeletd element :%d",temp->data);
		top=temp->next;
		free(temp);
		
	}
}
void display()
{
	if(top==NULL)
	{
		printf("Stack is empty\n");	
	}
	else
	{
        struct Node *temp=top;
		while(temp->next!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("%d--->NULL",temp->data);
	}
}
