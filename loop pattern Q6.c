//Print the pattern(Half Pyramid Rotated by 180 degree)
//			    * 
//		   	  * * 
//		    * * *
//		  * * * *	
//		* * * * *

#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
	printf(" \n");	
		
	}
	
	printf("\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");
	
return 0;
}

