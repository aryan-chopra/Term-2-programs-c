/*Write a program to swap two variable:
 (a) By using temporary variable.*/

#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    int temp = secondNumber;
    secondNumber = firstNumber;
    firstNumber = temp;

    printf("First number after swapping: %i\n", firstNumber);
    printf("Second number after swapping: %i\n", secondNumber);

    return 0;
}