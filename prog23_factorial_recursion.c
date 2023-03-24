// Write a program to find the factorial of a number by using the concept of recursion.

#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d", n, factorial(n));

    return 0;

}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}