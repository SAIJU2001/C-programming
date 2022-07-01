//input any no and check that the no is prime or not.

#include<stdio.h>

int main()
{
	int n,count=0,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("\n");
	for(i=2 ;i<n ; i++ )
	{
		if(n%i==0)
		count++;
	}
	if(count==0)
	printf("The number %d is a prime number.",n);
	else
	printf("The number %d is not a prime number.",n);
	
}
