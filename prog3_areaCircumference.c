#include <stdio.h>

int main(void)
{
    double radius;

    printf("Enter the radius of the circe: ");
    scanf("%lf", &radius);

    double area = 3.142 * (radius * radius);
    double circumference = 2 * 3.142 * radius;
    printf("%f\n", radius);
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);
}