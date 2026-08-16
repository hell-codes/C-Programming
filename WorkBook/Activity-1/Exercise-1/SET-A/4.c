#include <stdio.h>
int main()
{
    float a, b, perimeter, area;

    printf("Enter outer radius and inner radius: ");
    scanf("%f%f", &a, &b);

    perimeter = 2 * 3.14 *(a + b);
    area = 3.14 *(a * a - b * b);

    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);

    return 0;
}
