//Print the pattern(Rectangle)
//		* * * * *
//		* * * *
//		* * * 	
//		* * 
//		*

#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	printf("\n");
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf(" *");
		}
	printf(" \n");	
		
	}
	
	printf("\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");
	
return 0;
}


