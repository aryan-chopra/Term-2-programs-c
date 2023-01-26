/*Write a program to evaluate each of the following equations. 
(i) V = u + at. 
(ii) S = ut+1/2at2 
(iii) T=2*a+√b+9c 
(iv) H=√b2+p2*/

#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, u, t, b, c, p;

    //Taking various variables as input from the user
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

    //Calculating the various variables required from the equations provided and printing the result
    double V = u + (a * t);
    double S = (u * t) + (0.5 * a  * (t * t));
    double T = (2 * a) + sqrt(b + (9 * c));
    double H = sqrt(b * b) + (p * p);

    printf("V: %lf\n", V);
    printf("S: %lf\n", S);
    printf("T: %lf\n", T);
    printf("H: %lf\n", H);
}