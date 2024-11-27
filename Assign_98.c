#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **mat1, int **mat2, int **result, int r1, int c1, int r2, int c2) 
{
    if (c1 != r2) 
   {
        printf("Error: Number of columns in matrix 1 must equal number of rows in matrix 2.\n");
        return;
    }

    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) 
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) 
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int r1, c1, r2, c2;

    printf("Enter the dimensions of matrix 1 (rows, columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the dimensions of matrix 2 (rows, columns): ");
    scanf("%d %d", &r2, &c2);

    // Allocate memory for matrices
    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) 
   {
        mat1[i] = (int *)malloc(c1 * sizeof(int));
    }

    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    for (int i = 0; i < r2; i++) 
    {
        mat2[i] = (int *)malloc(c2 * sizeof(int));
    }

    int **result = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) 
    {
        result[i] = (int *)malloc(c2 * sizeof(int));
    }

    // Input elements for matrix 1
    printf("Enter elements for matrix 1:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for matrix 2
    printf("Enter elements for matrix 2:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);

    // Print the result matrix
    printf("Product of the matrices:\n");
    printMatrix(result, r1, c2);

    // Free the allocated memory
    for (int i = 0; i < r1; i++) 
    {
        free(mat1[i]);
    }
    free(mat1);

    for (int i = 0; i < r2; i++)
  {
        free(mat2[i]);
    }
    free(mat2);

    for (int i = 0; i < r1; i++) 
   {
        free(result[i]);
    }
    free(result);

    return 0;
}

