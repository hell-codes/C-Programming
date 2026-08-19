#include <stdio.h>
int main()
{
    float x, sum = 0;
    int n, i;

    printf("Enter x and n: ");
    scanf("%f%d", &x, &n);

    for (i = 1; i <= n; i++)
        sum += (2 * i - 1) * x;

    printf("Sum = %.2f", sum);

    return 0;
}
