#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n & 1)
        printf("%d is Odd\n", n);
    else
        printf("%d is Even\n", n);
    if (n % 3 == 0)
        printf("%d is divisible by 3\n", n);
    else
        printf("%d is NOT divisible by 3\n", n);
    if (n % 5 == 0)
        printf("%d is divisible by 5\n", n);
    else
        printf("%d is NOT divisible by 5\n", n);
    return 0;
}
