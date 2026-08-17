#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2, real, imag;
    float cp, sp;

    printf("Enter a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b*b - 4*a*c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are %.2f and %.2f\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        printf("Equal Roots = %.2f\n", r1);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Roots are %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);
    if (sp > cp)
        printf("Profit = %.2f", sp - cp);
    else if (cp > sp)
        printf("Loss = %.2f", cp - sp);
    else
        printf("No Profit No Loss");

    return 0;
}
