// write a program which converts binary to decimal taking user input.

#include<stdio.h>

int main()
    {
        int binary,decimal=0,base=1,rem,n;
		printf("Enter the binary number : ");
        scanf("%d",&binary);
		printf("\n");
        n = binary;
        while( n!=0 )
        {
            rem = n%10; 
            decimal = decimal+rem*base;
            base = base*2;
            n = n/10;
        }
        printf("The decimal equivalent of binary number %d is : %d",binary,decimal);
    return 0;
    }

