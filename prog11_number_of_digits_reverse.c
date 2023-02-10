// Write the program to count the digits in a number and then print the reverse of the number also

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    int numberOfDigits = 0;
    int reverseNumber = 0;
    while (number > 0)
    {
        reverseNumber = (reverseNumber * 10) + (number % 10);
        number /= 10;
        numberOfDigits++;
    }
    
    printf("Number of digits: %i\n", numberOfDigits);
    printf("Reverse of the number: %i\n", reverseNumber);

    return 0;
}