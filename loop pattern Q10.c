//Print the pattern(Floyd's Triangle)
//		1 
//		2  3
//		4  5  6
//		7  8  9  10
//		11 12 13 14 15 

#include<stdio.h>

int main()
{
	int i,j,n,count=1;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("  %d",count);
			count++;
		}
	printf("  \n");	
		
	}
	
	printf("\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");
	
return 0;
}


