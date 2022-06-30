//creat a subtraction function and calculate sum

#include<stdio.h>

int subtraction_function(int a,int b)
{
 	int sub=a-b;
	 return sub;	
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
	int sub=subtraction_function(a,b);
	printf("The subtraction of two number %d-%d=%d",a,b,sub);
	return 0;
}
