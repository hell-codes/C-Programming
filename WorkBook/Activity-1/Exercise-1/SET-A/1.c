#include <stdio.h>
int main()
{
    float r, h, sa, v;

    printf("Enter radius and height: ");
    scanf("%f%f", &r, &h);

    sa = 2 * 3.14 *(r*r) + 2 * 3.14 * r*h;
    v = 3.14 *(r*r) * h;

    printf("Surface Area = %.2f\n", sa);
    printf("Volume = %.2f\n", v);

    return 0;
}
