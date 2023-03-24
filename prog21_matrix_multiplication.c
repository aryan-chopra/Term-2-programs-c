#include <stdio.h>

int matrix_multiplication(int a[][3], int b[][3], int c[][3]);

int main(void)
{
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the elements of the first matrix: ");
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            scanf("%d", &a[row][column]);
        }
    }

    printf("Enter the elements of the second matrix: ");
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            scanf("%d", &b[row][column]);
        }
    }

    matrix_multiplication(a, b, c);

    printf("The product of the two matrices is:\n");
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            printf("%d ", c[row][column]);
        }
        printf("\n");
}

    return 0;
}

int matrix_multiplication(int a[][3], int b[][3], int c[][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            c[row][column] = 0;
            for (int index = 0; index < 3; index++)
            {
                c[row][column] += a[row][index] * b[index][column];
            }
        }
    }
}