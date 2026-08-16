#include <stdio.h>
int main()
{
    float f, c, k;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (5 * (f - 32))/9;
    k = c + 273.15;

    printf("Celsius = %.2f\n", c);
    printf("Kelvin = %.2f\n", k);

    return 0;
}
