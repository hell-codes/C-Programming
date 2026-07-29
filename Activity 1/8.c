#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    printf("Thousands: %d\n", num / 1000);
    printf("Hundreds: %d\n", (num / 100) % 10);
    printf("Tens: %d\n", (num / 10) % 10);
    printf("Units: %d\n", num % 10);

    return 0;
}
