#include<stdio.h>

#define add(x,y) x+y
#define sub(x,y) x-y
#define mul(x,y) x*y
#define div(x,y) x/y
#define mod(x,y) x%y

int main()
{
	int a,b;
	printf("Enter the first number: \n");
	scanf("%d",&a);
	printf("Enter the second number: \n");
	scanf("%d",&b);
	printf("The addition of two number is %d\n",add(a,b));
	printf("The subtraction of two number is %d\n",sub(a,b));
	printf("The multiplication of two number is %d\n",mul(a,b));
	printf("The division of two number is %d\n",div(a,b));
	printf("The modulous of two number is %d\n",mod(a,b));
	printf("\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");
	
	return 0;
}
