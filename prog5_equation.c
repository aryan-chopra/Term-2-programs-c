/*Write a program to evaluate each of the following equations. 
(i) V = u + at. 
(ii) S = ut+1/2at2 
(iii) T=2*a+√b+9c 
(iv) H=√b2+p2*/

#include <math.h>
#include <stdio.h>

int main(void)
{
    float a, u, t, b, c, p;

    //Taking various variables as input from the user
    printf("Enter u: ");
    scanf("%f", &u);
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter t: ");
    scanf("%f", &t);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    printf("Enter p: ");
    scanf("%f", &p);

    //Calculating the various variables required from the equations provided and printing the result
    float V = u + (a * t);
    float S = (u * t) + (1 / (float)2 * a  * powf(t, 2));
    float T = (2 * a) + sqrt(b + (9 * c));
    float H = sqrt(powf(b, 2) + powf(p, 2));

    printf("V: %.2f\n", V);
    printf("S: %.2f\n", S);
    printf("T: %.2f\n", T);
    printf("H: %.2f\n", H);
    
    return 0;
}
