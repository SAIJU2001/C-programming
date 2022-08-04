// write a program to print the factorial of n number.

#include<stdio.h>

	int fact=1;
    void number_print(int num)
    {
        if( num==0 )
        {
            printf("The factorial is : %d",fact);
            return;
        }
        fact=fact*num;
        number_print(num-1);
    }   
    void main()
    {
        int n;
		printf("Enter the number : ");
        scanf("%d",&n);
		printf("\n");
        number_print(n);
    }

