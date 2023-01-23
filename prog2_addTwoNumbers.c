#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;

    //Taking the two numbers from user
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    //Adding the numbers and printing them
    int sum = firstNumber + secondNumber;
    printf("Sum: %i", sum);
}