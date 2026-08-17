#include <stdio.h>
int main()
{
    float r, area, circumference, volume;
    int ch;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("\n1. Area of Circle");
    printf("\n2. Circumference of Circle");
    printf("\n3. Volume of Sphere");

    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            area = 3.14 * r * r;
            printf("Area of Circle = %.2f", area);
            break;

        case 2:
            circumference = 2 * 3.14 * r;
            printf("Circumference of Circle = %.2f", circumference);
            break;

        case 3:
            volume = (4/3) * 3.14 * r * r * r;
            printf("Volume of Sphere = %.2f", volume);
            break;

        default:
            printf("Invalid Choice");
    }
    return 0;
}
