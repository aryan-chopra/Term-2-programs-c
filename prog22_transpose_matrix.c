#include <stdio.h>

void transpose_matrix(int columns, int rows, int matrix[][columns], int transpose[][columns]);

int main(void)
{
    int rows, columns;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    printf("Enter the elements of the matrix: ");
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            scanf("%d", &matrix[row][column]);
        }
    }

    int transpose[columns][rows];
    transpose_matrix(columns, rows, matrix, transpose);
    printf("The transpose of the matrix is:\n");
    for (int row = 0; row < columns; row++)
    {
        for (int column = 0; column < rows; column++)
        {
            printf("%d ", transpose[row][column]);
        }
        printf("\n");
    }

    return 0;
}

void transpose_matrix(int columns, int rows, int matrix[][columns], int transpose[][columns])
{
    for (int row = 0; row < columns; row++)
    {
        for (int column = 0; column < rows; column++)
        {
            transpose[row][column] = matrix[column][row];
        }
    }
}