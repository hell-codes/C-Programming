#include <stdio.h>
int main()
{
    int a, b;
    char op;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Division by zero not possible");
            break;

        default:
            printf("Invalid Operator");
    }
    return 0;
}
