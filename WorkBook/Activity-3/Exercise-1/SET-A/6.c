#include <stdio.h>
int main()
{
    int n, temp, digit, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit;
        count++;
        temp /= 10;
    }

    printf("Digits = %d\n", count);
    printf("Sum = %d", sum);

    return 0;
}
