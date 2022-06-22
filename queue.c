//Program to create stack using linked list 

#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data ;
	struct node *next ;
};
struct node *head=NULL,*pos=NULL,*temp=NULL,*del=NULL,*new;

void enqueue (int x)
{	
		if (head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head -> data =x;
			new=head;
		}
		else
		{
			new->next=(struct node *)malloc(sizeof(struct node));
			new=new-> next;
			new->data=x;
		}
}


void dequeue()
{
	if (head==NULL)
	{
		printf("Queue Underflow !");
		printf("\n");
	}
	else
	{
		del=head;
		head=head->next;
		free(del);
		pos=head;
		if(head==NULL)
		{
			printf("No elements to print...");
			printf("\n");
		}
		else
		{
			printf("The elements after deletion are:\n");
			while(pos !=NULL)
			{
				printf("%d\n",pos->data);
				pos=pos->next;
			}
			printf("\n");
		}
	}
	
}

void display()
{
	if(head==NULL)
	{
		printf("No elements present..");
		printf("\n");
	}
	else
	{

		pos=head;
		printf("\nElements are :\n");
		while (pos !=NULL)
		{
			printf("%d\n",pos -> data);
			pos =pos  -> next;
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
		printf("Enter your choice:{1/2/3/4}:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				{
					printf("Enter the value to be Entered:");
				      	scanf("%d",&val);
				      	enqueue(val);
				} 
				break;  			
			case 2: 
				{
					dequeue();
				}
				break;
			case 3:
				{
					display();
				}
				break;
			case 4:
				{
					printf("Thankyou !!\n");
					exit(0);
				}
			default:
				printf("Option not found !");
		}
	}
}


