/*Write a program to swap two variable:
  b) Without using temporary variable*/

#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    printf("First number after swapping: %i\n", firstNumber);
    printf("Second number after swapping: %i\n", secondNumber);

    return 0;
}