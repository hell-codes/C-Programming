#include <stdio.h>
int main()
{
    float l, b, h, sa, v;

    printf("Enter length, breadth and height: ");
    scanf("%f%f%f", &l, &b, &h);

    sa = 2 * (l*b + l*h + b*h);
    v = l*b*h;

    printf("Surface Area = %.2f\n", sa);
    printf("Volume = %.2f\n", v);

    return 0;
}
