// write a program for fibonacci series taking user input.

#include<stdio.h>

int main()
    {
        int a=0,b=1,result,n,i;
        printf("Enter the number : ");
        scanf("%d",&n);
        printf("\n");
        printf("The fibonacci series is : ");
        for( i=1 ; i<=n ; i++ )
        {
            printf("%d ",a);
            result=a+b;
            a=b;
            b=result;
        }
        return 0;
    }

