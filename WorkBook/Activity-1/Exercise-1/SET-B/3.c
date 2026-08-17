#include <stdio.h>
int main()
{
    int amount, ten, five, one;

    printf("Enter amount: ");
    scanf("%d", &amount);

    ten = amount / 10;
    amount = amount % 10;

    five = amount / 5;
    amount = amount % 5;

    one = amount;

    printf("10 Rupee Notes = %d\n", ten);
    printf("5 Rupee Notes = %d\n", five);
    printf("1 Rupee Notes = %d\n", one);

    return 0;
}
