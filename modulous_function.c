//creat a modulous function and calculate sum

#include<stdio.h>

int modulous_function(int a,int b)
{
 	int mod=a%b;
	 return mod;	
}
int main()
{
	int a,b;
	char c='%';
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\n");
	int mod=modulous_function(a,b);
	printf("The modulous of two number %d%c%d=%d",a,c,b,mod);
	return 0;
}
