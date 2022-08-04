// write a program to print sum of first n natural number.

#include<stdio.h>

	int sum=0;
    void number_print(int num)
    {
        if( num<=0 )
        {
            printf("The sum of the natural number is : %d",sum);
            return;
        }
        sum=sum+num;
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

