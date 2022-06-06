#include<stdio.h>

#define GREATER(x,y) if(x>y) \
printf("%d is greater than %d.",x,y); \
else \
printf("%d is greater than %d.",y,x);

int main()
{	
	int a,b;
	printf("Enter the first value : \n");
	scanf("%d",&a);
	printf("Enter the second value : \n");
	scanf("%d",&b);
	
	GREATER(a,b);
	printf("\n\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");

	return 0;
}
