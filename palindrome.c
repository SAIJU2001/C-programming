//input any no and check that the no is palindrome or not.

#include<stdio.h>

void main()
{
	int l,n,result=0,rem;
	printf("Enter the no : ");
	scanf("%d",&n);
	printf("\n");
	l=n;
	while(l!=0)
	{
		rem=l%10;
		result=result*10+rem;
		l=l/10;
	}
	if(result==n)
	printf("The no %d is a palindrome number",n);
	else
	printf("The no %d is not a palindrome number",n);	
}
