#include <stdio.h>
int main()
{
    float m1, m2, m3, avg;

    printf("Enter marks of three subjects: ");
    scanf("%f%f%f", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3;
    printf("Average = %.2f\n", avg);

    if (avg >= 75)
        printf("Distinction");
    else if (avg >= 60)
        printf("First Class");
    else if (avg >= 50)
        printf("Second Class");
    else if (avg >= 40)
        printf("Pass Class");
    else
        printf("Fail");

    return 0;
}
