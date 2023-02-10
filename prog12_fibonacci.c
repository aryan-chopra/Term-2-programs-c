// Write a program to generate the Fibonacci series

#include <stdio.h>

int main(void)
{
    int firstNumber = 0;
    int secondNumber = 1;
    int sum = firstNumber + secondNumber;

    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", sum);
        firstNumber = secondNumber;
        secondNumber = sum;
        sum = firstNumber + secondNumber;
    }

    return 0;
}