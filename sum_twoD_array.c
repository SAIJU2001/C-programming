// write a program that reads 5x5 array of intiger and the prints the row sum and column sum.

#include<stdio.h>

int main()
    {  
        // array input
		int rows,cols,i,j,add=0,sum=0; 
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

        // array output row sum
        for( i=0 ; i<rows ; i++)
            {
            	for( j=0 ; j<cols ; j++)
            	add = add + numbers[i][j];
            }
            printf("The value of the rows sum is : %d",add);
            printf("\n");
            
        // array output column sum
        for( j=0 ; j<cols ; j++)
            {
            	for( i=0 ; i<rows ; i++)
            	sum = sum + numbers[i][j];
            }
            printf("The value of the columns sum is : %d",sum);
            printf("\n");
                
                
        return 0;
    }

