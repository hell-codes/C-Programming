#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is larger than %d.\n", a, b);
    } else if (b > a) {
        printf("%d is larger than %d.\n", b, a);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
