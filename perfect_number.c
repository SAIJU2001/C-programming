// write a program to check the number is a perfect number or  not.

#include<stdio.h>

int main()
    {
        int n,i,sum=0;
		printf("Enter the number : ");
        scanf("%d",&n);
		printf("\n");
        int m=n;
        
        for( i=1 ; i<m ; i++)
        {
            if( m%i==0 )
            sum=sum+i;
        }
        if( n==sum)
        printf("The number %d is a perfect number.",n);
        else
        printf("The number %d is not a perfect number.",n);
    }

