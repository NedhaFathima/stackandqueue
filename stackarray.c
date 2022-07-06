#include <stdio.h>
#include <stdlib.h>
#define n 5

int top=-1;
int stack[n];
int isfull()
	{
		if(top==n-1)	return 1;
		else return 0;
	}
	int isempty()
	{
		if(top==-1)	return 1;
		else return 0;
	}
void push(int val)
{
	if (isfull())
	{
		printf("\nOverflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d pushed\n",stack[top]);
	}
}	
void pop()
	{
		if(isempty())
		{
			printf("\nUnderflow");
		}
		else
		{
			printf("\n%d popped\n",stack[top]);
			stack[top]=-1;
			top--;
		}
	}
			
void findtop()
	{
		printf("\nTop position %d",top);
		printf("\nTop value %d",stack[top]);
	} 
void display()
	{
		int i,x;
		x=top;
		for(i=x;i>=0;i--)
			printf("\n%d",stack[i]);
			printf("\n");
	}			
void main()
{
	int ch,entry;
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.TOP\n4.DISPLAY");	
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter data: ");
				scanf("%d",&entry);	
				push(entry);
			}break;
			case 2:
			{
				pop();
			}break;
			case 3:
			{
				findtop();
			}break;
			case 4:
			{
				display();
			}break;						
		}

	}
}
