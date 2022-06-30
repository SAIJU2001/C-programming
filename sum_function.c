//creat a sum function and calculate sum

#include<stdio.h>

int sum_function(int a,int b)
{
 	int sum=a+b;
	 return sum;	
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
	int sum=sum_function(a,b);
	printf("The sum of two number %d+%d=%d",a,b,sum);
	return 0;
}
