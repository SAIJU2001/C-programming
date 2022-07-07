// Take an array as input from the user. search for a given number and print the index at which it occurs.

#include<stdio.h>

int main()
    {  
        // array input 
        int i,n,j=0,size;
        printf("Enter the no of index you want : ");
        scanf("%d",&size);
        printf("\n");
        int numbers[size];
        
        for( i=0 ; i<size ; i++)
            {
                printf("Enter the value of index no %d is : ",i);
                scanf("%d",&numbers[i]);
            }
            printf("\n");

        // input the searched number
        printf("Enter the value which is search for : ");
        scanf("%d",&n);
        printf("\n"); 

        // search the number
        for( i=0 ; i<size ; i++)
            {
                if(numbers[i] == n)
                {
                    printf("The value %d is found in the index no : %d",n,i);
                    j++;
                    printf("\n");
                }
            }
        if(j == 0)
        printf("The value is not found in this array.");
        printf("\n");
	return 0;
}
    

