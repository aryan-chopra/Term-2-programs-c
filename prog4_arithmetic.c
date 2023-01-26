//Write a Program to perform addition, subtraction, division and multiplication of two numbers given as input by the user.

#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;

    //Taking the two numbers as input from the user
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    //Performing the arithetic operations required and printing the result
    int sum = firstNumber + secondNumber;
    int product = firstNumber * secondNumber;
    int difference = firstNumber - secondNumber;
    //Explicitly converting "fristNumber" and "secondNumber" to "double" to perform division
    float division = (float)firstNumber / (float)secondNumber;
    
    printf("Sum: %i\n", sum);
    printf("Product: %i\n", product);
    printf("Difference: %i\n", difference);
    printf("Division: %f\n", division);
    
    return 0;
}
