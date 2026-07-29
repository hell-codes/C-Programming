#include <stdio.h>
#include <math.h>

int main() 
{
    double principal, rate, time, amount, ci;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%lf", &time);

    amount = principal * pow(1 + rate / 100, time);
    ci = amount - principal;

    printf("Amount: %.2f\n", amount);
    printf("Compound Interest: %.2f\n", ci);

    return 0;
}
