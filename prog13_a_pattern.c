/* Write a program to print the following patterns:
a)
*
* *
* * *
* * * *
* * * * *
* * * * * * 
*/

#include <stdio.h>

int main(void)
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int row = 1; row <= rows; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

