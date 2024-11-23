#include <stdio.h>

int main() 
{
    float p,r,t,s;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &r);
    printf("Enter time (in years): ");
    scanf("%f", &t);


    s= (p*r*t) / 100;
    printf("Simple Interest = %f", s);

    return 0;
}