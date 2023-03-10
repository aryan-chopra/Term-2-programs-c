//Write a program to calculate the area and circumference of a circle using functions.

#include <stdio.h>

float area(float radius);
float circumference(float radius);

int main(void)
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area: %.2f\n", area(radius));
    printf("Circumference: %.2f\n", circumference(radius));
    
    return 0;
}

float area(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

float circumference(float radius)
{
    float circumference = 2 * 3.14 * radius;
    return circumference;
}
