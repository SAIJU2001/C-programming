// write a program which converts binary to octal taking user input.

#include<stdio.h>

int main()
    {
        int octal=0,base=1,rem,decimal=0,binary,n;
		printf("Enter the Binary number : ");
        scanf("%d",&binary);
        printf("\n");
        n = binary;
        while( n!=0 )
        {
			rem = n%10;
			if( rem==1 || rem==0 ) 
			{
            	decimal = decimal+rem*base;
            	base = base*2;
            	n = n/10;
            }
            else
            {
				printf("It is not a valid binary number");
            	break;
            }
        }
        int m = decimal;
        base = 1; 
        while( m!=0 )
        {
            rem = m%8; 
            octal = octal+rem*base;
            base = base*10;
            m = m/8;
        }
        printf("The octal equivalent of binary number %d is : %d",binary,octal);
    }

