// write a program which converts octal to binary taking user input.

#include<stdio.h>

int main()
    {
        int l=0,binary=0,base=1,rem,decimal=0,n,octal;
		printf("Enter the octal number : ");
        scanf("%d",&octal);
		printf("\n");
        n = octal;
        while( n!=0 )
        {
            rem = n%10; 
            if( rem==8 || rem==9 )
            {
                printf("It is not a valid octal number");
                printf("\n");
                l=l+1;
                break;
            }
            else
            {
                decimal = decimal+rem*base;
                base = base*8;
                n = n/10;
            }
        }
        int m = decimal;
        base = 1; 
        while( m!=0 )
        {
            rem = m%2; 
            binary = binary+rem*base;
            base = base*10;
            m = m/2;
        }
        if(l==0)
        printf("The binary equivalent of octal number %d is : %d",octal,binary);
    }

