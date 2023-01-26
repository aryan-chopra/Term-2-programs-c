//// Write a program to show the use to input (Scanf)/ output (Printf) statements and block structures of C program by highlighting the features of stdio.h

#include <stdio.h>

int main(void) {

    int number;

    //Getting a user input, demonstrating the use of 'scanf'
    printf("Enter a number: ");
    scanf("%d", &number);

    //Printing the number input by the user, demonstrating the use of 'printf'
    printf("The number you entered was: %d\n", number);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber;

    //Taking the two numbers from user
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    //Adding the numbers and printing them
    int sum = firstNumber + secondNumber;
    printf("Sum: %i", sum);
}