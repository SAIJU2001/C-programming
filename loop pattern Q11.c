//Print the pattern(0-1 Triangle)
//		1 
//		0 1  
//		1 0 1
//		0 1 0 1
//		1 0 1 0 1 

#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			
				printf(" 1");
			else
				printf(" 0");	
			
		}
	printf(" \n");	
		
	}
	
	printf("\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");
	
return 0;
}


