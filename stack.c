// Program to create Stack using Singly linked list

#include <stdio.h>
#include <stdlib.h>


struct node 
{
	int data ;
	struct node *next ;
};
struct node *head=NULL,*pos=NULL,*temp=NULL,*del=NULL,*new;


void push (int x)
{	
		if (head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head -> data =x;
		}
		else
		{
			new=(struct node *)malloc(sizeof(struct node));
			new-> data=x;
			new->next=head;
			head=new;
		}
}

void pop()
{
	if (head==NULL)
	{
		printf("Stack Underflow !");
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
	printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n");
	while(1)
	{
		printf("Enter your choice:{1/2/3/4}:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				{
					printf("Enter the value to be pushed:");
				      	scanf("%d",&val);
				      	push(val);
				} 
				break;  			
			case 2: 
				{
					pop();
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
	

	
