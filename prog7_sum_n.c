//Write a program using while loop to print the sum of first n natural numbers

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int sum = 0;
    while (n > 0)
    {
        sum += n--;
    }

    printf("Sum of first n natural numbers: %i\n", sum);

    return 0;
}