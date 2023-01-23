#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    int sum = firstNumber + secondNumber;
    int product = firstNumber * secondNumber;
    int difference = firstNumber - secondNumber;
    double division = (double)firstNumber / (double)secondNumber;
    printf("Sum: %i\n", sum);
    printf("Product: %i\n", product);
    printf("Difference: %i\n", difference);
    printf("Division: %lf\n", division);
}