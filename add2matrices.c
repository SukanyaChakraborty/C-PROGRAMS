#include <stdio.h>
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols])
 {
 	int i,j;
    for (i = 0; i < rows; i++)
	 {
        for(j = 0; j < cols; j++) 
		{
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() 
{
    int rows, cols,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
    
    printf("Enter elements of first matrix:\n");
    for ( i = 0; i < rows; i++)
	 {
        for ( j = 0; j < cols; j++) 
		{
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            scanf("%d", &mat2[i][j]);
        }
    }
    
    addMatrices(rows, cols, mat1, mat2, result);
    
    printf("Resultant matrix after addition:\n");
    for ( i = 0; i < rows; i++)
	 {
        for ( j = 0; j < cols; j++)
		 {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

