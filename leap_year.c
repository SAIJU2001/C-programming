// write a program to input year and check that the year is leap year or not.

#include<stdio.h>

int main()
    {
        int year;
		printf("Enter the year : ");
        scanf("%d",&year);
		printf("\n");
        if( year%400==0 )
        printf("%d is a leap year.",year); 
        else if(year%100==0)
        printf("%d is not a leap year.",year);
        else if (year%4==0)
        printf("%d is a leap year.",year);
        else
        printf("%d is not a leap year.",year);
    }

