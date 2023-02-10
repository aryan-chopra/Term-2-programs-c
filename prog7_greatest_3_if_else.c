/* Write a Program to find the greatest among three numbers using:
   If-Else statement */

#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber, thirdNumber;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    int largestNumber;
    if (firstNumber > secondNumber)
    {
        if (firstNumber > thirdNumber)
        {
            largestNumber = firstNumber;
        }
        else 
        {
            largestNumber = thirdNumber;
        }
    }
    else
    {
        if (secondNumber > thirdNumber)
        {
            largestNumber = secondNumber;
        }
        else
        {
            largestNumber = thirdNumber;
        }
    }

    printf("Largest number: %i\n", largestNumber);

    return 0;
}