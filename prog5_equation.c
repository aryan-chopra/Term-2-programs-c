#include <stdio.h>
#include <math.h>

int main(void)
{
    double u, a, t, b, c, p;

    printf("Enter u: ");
    scanf("%lf", &u);
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter t: ");
    scanf("%lf", &t);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    printf("Enter p: ");
    scanf("%lf", &p);

    double V = u + (a * t);
    double S = (u * t) + (0.5 * a  * (t * t));
    double T = (2 * a) + sqrt(b + (9 * c));
    double H = sqrt(b * b) + (p * p);

    printf("V: %lf\n", V);
    printf("S: %lf\n", S);
    printf("T: %lf\n", T);
    printf("H: %lf\n", H);
}