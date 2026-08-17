#include <stdio.h>
int main()
{
    int ch;
    float side, length, breadth, base, height, area;
    printf("\n1. Area of Square");
    printf("\n2. Area of Rectangle");
    printf("\n3. Area of Triangle");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            printf("Enter side: ");
            scanf("%f", &side);

            area = side * side;
            printf("Area of Square = %.2f", area);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f%f", &length, &breadth);

            area = length * breadth;
            printf("Area of Rectangle = %.2f", area);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f%f", &base, &height);

            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f", area);
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}
