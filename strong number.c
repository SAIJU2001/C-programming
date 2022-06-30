//input any no and check that the no is strong number or not.

#include<stdio.h>

void main()
{
	int l,n,result=0,rem,fact=1,i;
	printf("Enter the no : ");
	scanf("%d",&n);
	printf("\n");
	l=n;
	while(l!=0)
	{
		rem=l%10;
		for(i=rem ; i>=1 ; i--)
		{
			fact=fact*i;
		}
		result=result+fact;
		l=l/10;
		fact=1;
	}
	if(result==n)
	printf("The no %d is a strong number",n);
	else
	printf("The no %d is not a strong number",n);	
}
