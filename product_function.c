//creat a product function and calculate sum

#include<stdio.h>

int product_function(int a,int b)
{
 	int mul=a*b;
	 return mul;	
}
int main()
{
	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\n");
	int mul=product_function(a,b);
	printf("The product of two number %d*%d=%d",a,b,mul);
	return 0;
}
