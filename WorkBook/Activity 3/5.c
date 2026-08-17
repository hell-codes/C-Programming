#include <stdio.h>
int main() {
    int n, i = 1;
    int evenSum = 0, oddSum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
        i++;
    }
    printf("Sum of even numbers (1 to %d) = %d\n", n, evenSum);
    printf("Sum of odd numbers (1 to %d) = %d\n", n, oddSum);
    printf("Total sum = %d\n", evenSum + oddSum);
    return 0;
}
