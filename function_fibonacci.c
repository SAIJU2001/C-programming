// write a program to print the fibonacci series of n number.

#include<stdio.h>

int k=0,num,l=1;

void number_print(int i)
    {
        if( i==num )
        {
             return;
        }
        printf("%d\t",k);
        int fibo=k+l;
        k=l;
        l=fibo;
        number_print(i+1);
    }   
void main()
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        printf("\n");
        int i=0;
        number_print(i);
    }

