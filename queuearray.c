#include <stdio.h>
#include<stdlib.h>

#define n 5

int rear=-1;
int front=-1;

int queue[n];

int isfull()
{
	if (rear==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if (front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enqueue(int val)
{
	if (isfull())
	{
		printf("\nOverflow");
	}
	else
	{
		if (front==-1)
		{
			front =0;
		}
		rear++;
		queue[rear]=val;
	}
}

void dequeue()
{
	if (isempty())
	{
		printf("\nUnderflow");
	}
	else
	{
		front++;
		if(front>rear)
			front=rear=-1;
	}
}
void display()
{
	int i;
	if (front==-1)
	{
		printf("Queue empty\n");
	}
	else
	{

		for(i=front;i<=rear;i++)
		{		
			printf("\t%d\t",queue[i]);
		}
		printf("\n");
	}
}


void main()
{
	int ch,val;
	printf("MENU");
	printf("\n1.ENQUEUE  \n2.DEQUEUE \n3.DISPLAY \n4.EXIT\n");
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
			{
				printf("Enter the value:");
      			scanf("%d",&val);
      			enqueue(val);
			} break; 
			 
			case 2:
			{
				dequeue();
			} break;
			
			case 3:
			{
				display();
			} break;
			
			case 4:
			{
				printf("BYE BYE\n");
				exit(0);
			}
			default:
				printf("!!!Option not found!!!\n ");
		}
	}
}
