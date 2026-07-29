#include <stdio.h>
int main() 
{
    float a, b, result;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    switch (op) {
        case '+': result = a + b;
                  printf("Result: %.2f\n", result);
                  break;
        case '-': result = a - b;
                  printf("Result: %.2f\n", result);
                  break;
        case '*': result = a * b;
                  printf("Result: %.2f\n", result);
                  break;
        case '/': if (b == 0) {
                printf("Error: Division by zero!\n");
            } 
            else {
                result = a / b;
                printf("Result: %.2f\n", result);
            }
            break;
        case '%': if ((int)b == 0)  {
                printf("Error: Division by zero!\n");
            } 
             else {
                printf("Result: %d\n", (int)a % (int)b);
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
