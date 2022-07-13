#include <stdio.h>
#include <stdlib.h>
int x;
void linear(int a[],int x);
int n;
int i;

void main()
{
	int a[100];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	printf("The array elements are :\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("Enter the number you have to search :");
	scanf("%d",&x);
	linear(a,x);
}

void linear (int a[], int  x)
{
	int flag=0;
	for (i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			flag =1;
			break;
		}
	}
	if (flag ==1)
	{
		printf("%d found at position %d\n",x,i);
	}
	else
	{
		printf("Element not found!\n");
	}
}
