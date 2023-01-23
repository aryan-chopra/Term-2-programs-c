#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    int sum = firstNumber + secondNumber;
    printf("Sum: %i", sum);
}