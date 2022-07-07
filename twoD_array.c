// input a 2D array and print the array in the 2D format(matrix).

#include<stdio.h>

int main()
    {  
        // array input
		int rows,cols,i,j; 
        printf("Enter the no of rows you want : ");
        scanf("%d",&rows);
        printf("\n");
        printf("Enter the no of columns you want : ");
        scanf("%d",&cols);
        int numbers[rows][cols];
        printf("\n");
        for( i=0 ; i<rows ; i++)
            {
            	for( j=0 ; j<cols ; j++)
            	{
                	printf("Enter the value of %dth row and %dth column is : ",i,j);
                	scanf("%d",&numbers[i][j]);
            	}
            	printf("\n");
        	}

        // 2D array output
        for( i=0 ; i<rows ; i++)
            {
            	for( j=0 ; j<cols ; j++)
            	{
					printf("%d ",numbers[i][j]);
            	}
        		printf("\n");
        	}	
                
        return 0;
    }

