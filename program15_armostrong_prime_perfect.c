// Write a program to check that the given number is prime, Armstrong or perfect using the concept of functions.

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool prime(int number);
bool armstrong(int number);
bool perfect(int number);

int main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if (armstrong(number))
    {
        printf("Number is armstrong: %i\n", number);
    }
    if (prime(number))
    {
        printf("Number is prime: %i\n", number);
    }
    if (perfect(number))
    {
        printf("Number is perfect: %i\n", number);
    }

    return 0;
}

bool prime(int number)
{
    for (int divisor = 2; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            return false;
        }
    }
    return true;
}

bool armstrong(int number)
{
    int numberOfDigits = 0;
    int cloneNumber = number;
    while (number > 0)
    {
        numberOfDigits++;
        number /= 10;
    }

    int sumOfDigits = 0;
    number = cloneNumber;
    while (number > 0)
    {
        int digit = number % 10;
        sumOfDigits += pow(digit, numberOfDigits);
    }
    number = cloneNumber;

    if (number = sumOfDigits)
    {
        return true;
    }
    return false;
}

bool perfect(int number)
{
    int sumOfFactors = 0;
    for (int divisor = 1; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            sumOfFactors += divisor;
        }
    }
    if (sumOfFactors == number)
    {
        return true;
    }
    return false;
}