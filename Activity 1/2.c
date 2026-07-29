#include <stdio.h>
int main()
{
    float item1 = 55.50, item2 = 160.00, item3 = 24.99;
    float total, avg;

    total = item1 + item2 + item3;
    avg = total / 3.0;

    printf("Item 1: %.2f\n", item1);
    printf("Item 2: %.2f\n", item2);
    printf("Item 3: %.2f\n", item3);
    printf("Total Bill: %.2f\n", total);
    printf("Average Price: %.2f\n", avg);

    return 0;
}
