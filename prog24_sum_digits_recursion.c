// Write a program to display the sum of the digits of a number by using the concept of recursion.

#include <stdio.h>

int sum_digits(int n);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits of %d is %d", n, sum_digits(n));

    return 0;
}

int sum_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sum_digits(n / 10);
    }
}