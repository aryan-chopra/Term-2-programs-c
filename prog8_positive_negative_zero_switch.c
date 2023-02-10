/* Write the following programs using switch case statement:
   To check whether a number is positive, negative or zero */

#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number > 0)
    {
    case 1:
        printf("Number is positive\n");
        break;
    case 0:
        switch (number < 0)
        {
            case 1:
                printf("Number is negative");
                break;
            case 0:
                printf("Number is zero");
        }
        break;
    }
}