#include <stdio.h>
long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %ld\n", num, factorial(num));
    }
    return 0;
}
