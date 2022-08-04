// write a program to print 1 to n number.

#include<stdio.h>

	int num;

	void number_print(int i)
    {
        if( i==num+1 )
        {
             return;
        }
        printf("%d\n",i);
        i++;
        number_print(i);
    }   
	
	void main()
    {
        printf("Enter the number : ");
        scanf("%d",&num);
		printf("\n");
        int i=1;
        number_print(i);
    }

