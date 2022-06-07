//Print the pattern(Hollow Rectangle)
//		* * * * *
//		*       *
//		*       *	
//		* * * * *

#include<stdio.h>

int main()
{
	int i,j,n,l;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter the number of columns : ");
	scanf("%d",&l);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=l;j++)
		{
			if(i==1||j==1||i==n||j==l)
			printf("	*");
			else
			printf("	 ");
		}
	printf("	\n");	
		
	}
	
	printf("\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");
	
return 0;
}


