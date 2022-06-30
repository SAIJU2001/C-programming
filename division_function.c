//creat a division function and calculate sum

#include<stdio.h>

int division_function(int a,int b)
{
 	int div=a/b;
	 return div;	
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
	int div=division_function(a,b);
	printf("The division of two number %d/%d=%d",a,b,div);
	return 0;
}
