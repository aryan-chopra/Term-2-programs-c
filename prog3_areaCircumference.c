//Write a program to calculate the area and the circumference of a circle by using radius as the input provided by the user.

#include <math.h>
#include <stdio.h>

int main(void)
{
    float radius;
    const float PI = 3.142;

    // Taking radius as input from the user
    printf("Enter the radius of the circe: ");
    scanf("%f", &radius);

    // Calculating area and circumference and printing them
    float area = PI * powf(radius, 2.0);
    float circumference = 2 * PI * radius;

    printf("Area: %0.2f\n", area);
    printf("Circumference: %0.2f\n", circumference);
}
