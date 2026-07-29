#include <stdio.h>

int main() 
{
    int a = 5, b = 10, c = 5;

    printf("a == c: %d\n", a == c);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("b >= c: %d\n", b >= c);
    printf("(a == c) && (b > a): %d\n", (a == c) && (b > a));
    printf("(a > b) || (c < b): %d\n", (a > b) || (c < b));
    printf("!(a == c): %d\n", !(a == c));
    printf("(a < b) && (b < c) || (a == c): %d\n",
           (a < b) && (b < c) || (a == c));

    return 0;
}
