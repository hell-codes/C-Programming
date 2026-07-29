#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) 
    {
        printf("Valid triangle.\n");

        if (a == b && b == c) 
        {
            printf("It is an equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an isosceles triangle.\n");
        } 
        else {
            printf("It is a scalene triangle.\n");
        }
    } 
    else {
        printf("Invalid triangle.\n");
    }

    return 0;
}
