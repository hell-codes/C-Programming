#include <stdio.h>
int main()
{
    float u, a, t, v, s;

    printf("Enter initial velocity, acceleration and time: ");
    scanf("%f%f%f", &u, &a, &t);

    v = u + a * t;
    s = u * t + 0.5 * a * t*t;

    printf("Final Velocity = %.2f\n", v);
    printf("Distance = %.2f\n", s);

    return 0;
}
