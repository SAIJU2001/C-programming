// write a program which converts decimal to binary taking user input.

#include<stdio.h>

int main()
    {
        int decimal,binary=0,base=1,rem,n;
		printf("Enter the Decimal number : ");
        scanf("%d",&decimal);
        printf("\n");
        n = decimal;
        while( n!=0 )
        {
            rem = n%2; 
            binary = binary+rem*base;
            base = base*10;
            n = n/2;
        }
        printf("The Binary equivalent of Decimal number %d is : %d",decimal,binary);
    return 0;
    }

