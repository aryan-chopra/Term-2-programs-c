/* Write the program to print the following pattern:
1 2  3  4  5  6
2 4  6  8  10 12
3 6  9  12 15 18
4 8  12 16 20 24
5 10 15 20 25 30
6 12 18 24 30 36 */

#include <stdio.h>

int main(void)
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int row = 1; row <= rows; row++)
    {
        int number = row;
        for (int column = 1; column <= rows; column++)
        {
            printf("%i", number);

            int lastElementOfColumn = rows * column;
            int digitsInLastElementOfColumn = 0;
            while (lastElementOfColumn > 0)
            {
                digitsInLastElementOfColumn++;
                lastElementOfColumn /= 10;
            }

            int digitsInNumber = 0;
            int numberCopy = number;
            while (numberCopy > 0)
            {
                digitsInNumber++;
                numberCopy /= 10;
            }

            int spaces = (digitsInLastElementOfColumn - digitsInNumber) + 1;
            for (int space = 1; space <= spaces; space++)
            {
                printf(" ");
            }

            number += row;
        }
        printf("\n");
    }

    return 0;
}