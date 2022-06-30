//creat a factorial function and calculate sum

#include<stdio.h>

int factorial_function(int n)
{
 	int fact=1,i;
 	for(i=n ; i>=1 ; i--)
	{
		fact=fact*i;
	}
	 return fact;	
}
int main()
{
	int n;
	printf("Enter the first number : ");
	scanf("%d",&n);
	printf("\n");
	int fact=factorial_function(n);
	printf("The factorial of this number %d is %d",n,fact);
	return 0;
}
