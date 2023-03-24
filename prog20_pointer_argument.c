#include <stdio.h>

void swap(int *firstNumber, int *secondNumber);

int main(void)
{
    int firstNumber, secondNumber;
    printf("Enter two numbers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    printf("Before swapping: firstNumber = %d, secondNumber = %d", firstNumber, secondNumber);
    swap(&firstNumber, &secondNumber);
    printf("Numbers after swapping: firstNumber = %d, secondNumber = %d", firstNumber, secondNumber);

    return 0;
}

void swap(int *firstNumber, int *secondNumber)
{
    int temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}
