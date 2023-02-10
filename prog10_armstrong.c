// Write a program to check a number is Armstrong or not using For loop

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int backupOfNumber = number;
    int numberOfDigits = 0;
    for (; number > 0; number /= 10)
    {
        numberOfDigits++;
    }

    number = backupOfNumber;
    int sum = 0;
    for (; number > 0; number /= 10)
    {
        int lastDigit = number % 10;
        int nThPowerOfLastDigit = 1;
        for (int timesMultiplied = 0; timesMultiplied < numberOfDigits; timesMultiplied++)
        {
            nThPowerOfLastDigit *= lastDigit;
        }
        sum += nThPowerOfLastDigit;
    }

    number = backupOfNumber;
    if (sum == number)
    {
        printf("Number is armstrong\n");
    }
    else
    {
        printf("Number is not armstrong");
    }

    return 0;
}