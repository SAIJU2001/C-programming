// write a program which converts octal to decimal taking user input.

#include<stdio.h>

int main()
    {
        int decimal=0,base=1,rem,n,octal;
		printf("Enter the octal number : ");
        scanf("%d",&octal);
		printf("\n");
        n = octal;
        while( n!=0 )
        {
            rem = n%10; 
            decimal = decimal+rem*base;
            base = base*8;
            n = n/10;
        }
        printf("The decimal equivalent of octal number %d is : %d",octal,decimal);
    }

