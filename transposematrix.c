#include <stdio.h>
void transposeMatrix(int rows, int cols, int mat[rows][cols], int transposed[cols][rows]) 
{
	int i,j;
    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            transposed[j][i] = mat[i][j];
        }
    }
}

int main()
 {
    int rows, cols,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int mat[rows][cols], transposed[cols][rows];
    
    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < rows; i++)
	 {
        for (j = 0; j < cols; j++) 
		{
            scanf("%d", &mat[i][j]);
        }
    }
    
    transposeMatrix(rows, cols, mat, transposed);
    
    printf("Transpose of the matrix:\n");
    for ( i = 0; i < cols; i++) 
	{
        for (j = 0; j < rows; j++)
		 {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

