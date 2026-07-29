#include <stdio.h>

int main() 
{
    float celsius = 37.5, fahrenheit;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("%.2f F = %.2f C\n", fahrenheit, celsius);

    return 0;
}
