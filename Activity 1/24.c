#include <stdio.h>

int main() 
{
    int a, b, c;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Larger: %d\n", (a > b) ? a : b);

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest: %d\n", max);

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s\n", num,
           (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero");

    return 0;
}
