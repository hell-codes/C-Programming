#include <stdio.h>
int main()
{
    float x, sum = 0, power = 1;
    int n, i;

    printf("Enter x and n: ");
    scanf("%f%d", &x, &n);

    for (i = 1; i <= n; i++)
    {
        power *= x;
        sum += power / i;
    }

    printf("Sum = %.2f", sum);

    return 0;
}
