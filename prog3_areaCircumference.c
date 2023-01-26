//Write a program to calculate the area and the circumference of a circle by using radius as the input provided by the user.

#include <stdio.h>

int main(void)
{
    double radius;

    //Taking radius as input from the user
    printf("Enter the radius of the circe: ");
    scanf("%lf", &radius);

    //Calculating area and circumference and printing them
    double area = 3.142 * (radius * radius);
    double circumference = 2 * 3.142 * radius;
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);
    
    return 0;
}
