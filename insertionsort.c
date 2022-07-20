#include <stdio.h>        
#include <stdlib.h>

#include <time.h>

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}
      
void insert(int a[], int n) /* function to sort an aay with insertion sort */  
{  
      int i, j, temp;  
      for (i = 1; i < n; i++) 
      {  
            temp = a[i];  
            j = i - 1;  
            while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
            {    
                	a[j+1] = a[j];     
                	j = j-1;    
            }    
            a[j+1] = temp;    
        }  
}  
      
void printArr(int a[], int n) /* function to print the array */  
{  
        int i;  
        for (i = 0; i < n; i++)  
            printf("%d ", a[i]);  
}  
      
int main()  
{
	struct timeval t0;
	struct timeval t1;
	float elapsed;
	
	srand( (unsigned) time(NULL) * getpid());   

	int n,i ;
	int a[100];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}	
	gettimeofday(&t0, NULL);
        printf("Before sorting array elements are: \n");  
        printArr(a, n);
        printf("\n");  
        insert(a, n);  
        gettimeofday(&t1, NULL);
        printf("\nAfter sorting array elements are: \n");    
        printArr(a, n);
        printf("\n");  
        printf("\n");  
        elapsed = timedifference_msec(t0, t1);
   	printf("Code executed in %f milliseconds.\n", elapsed);
   	printf("\n");
        return 0;  
} 
