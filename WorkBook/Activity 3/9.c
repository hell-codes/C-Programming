#include <stdio.h>
int main() {
    int low, high;
    printf("Enter lower and upper bound: ");
    scanf("%d %d", &low, &high);
    int a = 0, b = 1, next;
    printf("Fibonacci numbers between %d and %d:\n", low, high);
    while (a <= high) {
        if (a >= low)
            printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
