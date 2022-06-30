//input any no and output the factorial of this number.

#include<stdio.h>

void main()
{
	int n,fact=1,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("\n");
	for(i=n ; i>=1 ; i--)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d",n,fact);
	
}
