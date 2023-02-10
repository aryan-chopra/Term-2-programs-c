/* Write a Program to find the greatest among three numbers using:
   Conditional Operator */

#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber, thirdNumber;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    int largestNumber = (firstNumber > secondNumber) ? ((firstNumber > thirdNumber) ? firstNumber : thirdNumber) : ((secondNumber > thirdNumber) ? secondNumber : thirdNumber);
    printf("Largest number: %i\n", largestNumber);

    return 0;
}