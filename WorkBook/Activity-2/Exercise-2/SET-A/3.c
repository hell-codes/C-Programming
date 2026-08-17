#include <stdio.h>
int main()
{
    int x, y, ch, n, q, r, temp;

    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);

    printf("\n1. Equality");
    printf("\n2. Less Than");
    printf("\n3. Quotient and Remainder");
    printf("\n4. Range");
    printf("\n5. Swap");

    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            if (x == y)
                printf("x is equal to y");
            else
                printf("x is not equal to y");
            break;
        case 2:
            if (x < y)
                printf("x is less than y");
            else
                printf("x is not less than y");
            break;
        case 3:
            if (y != 0)
            {
                q = x / y;
                r = x % y;
                printf("Quotient = %d\n", q);
                printf("Remainder = %d", r);
            }
            else
                printf("Division by zero not possible");
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &n);
            if ((n >= x && n <= y) || (n >= y && n <= x))
                printf("Number lies between x and y");
            else
                printf("Number does not lie between x and y");
            break;
        case 5:
            temp = x;
            x = y;
            y = temp;

            printf("After swapping:\n");
            printf("x = %d\n", x);
            printf("y = %d", y);
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}
