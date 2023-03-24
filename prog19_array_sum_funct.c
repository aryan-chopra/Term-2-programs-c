// Write a program to calculate the sum of array elements by passing it to a function.

#include <stdio.h>

int sum_array(int a[], int n);

int main(void)
{
    int length;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    printf("Enter the elements of the array: ");
    int array[length];
    for (int index = 0; index < length; index++)
    {
        scanf("%d", &array[index]);
    }

    int sum = sum_array(array, 5);
    printf("sum = %d", sum);

    return 0;
}

int sum_array(int a[], int n)
{
    int sum = 0;
    for (int index = 0; index < n; index++)
    {
        sum += a[index];
    }
    return sum;
}