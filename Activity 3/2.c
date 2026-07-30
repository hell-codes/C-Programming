#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: a = %d, b = %d\n", a, b);
    int sum = a + b;
    float avg = (float)sum / 2;
    printf("Sum = %d, Average = %.2f\n", sum, avg);
    return 0;
}
