/* Write a program to print the following patterns:
b)
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
        int spaces = (rows * 2) - (row * 2);
        for (int space = 1; space <= spaces; space++)
        {
            printf(" ");
        }
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}