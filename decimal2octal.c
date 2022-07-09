// write a program which converts decimal to octal taking user input.

#include<stdio.h>

int main()
    {
        int octal=0,base=1,rem,n,decimal;
		printf("Enter the Decimal number : ");
        scanf("%d",&decimal);
        printf("\n");
        n = decimal;
        while( n!=0 )
        {
            rem = n%8; 
            octal = octal+rem*base;
            base = base*10;
            n = n/8;
        }
        printf("The octal equivalent of Decimal number %d is : %d",decimal,octal);
    }

