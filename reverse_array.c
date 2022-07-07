//write a program to print the user input array in reverse order.

#include<stdio.h>

int main()
    {  
        // array input
		int size,i; 
        printf("Enter the no of index you want : ");
        scanf("%d",&size);
        int numbers[size];
        printf("\n");
        for( i=0 ; i<size ; i++)
            {
                printf("Enter the value of index no %d is : ",i);
                scanf("%d",&numbers[i]);
            }
            printf("\n");

        // array output
        for( i=size-1 ; i>=0 ; i--)
            {
            	printf("The value of index no %d is : %d",i,numbers[i]);
                printf("\n");
            }
        return 0;
    }

