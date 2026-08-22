#include <stdio.h>
int main()
{
    int n1, d1, n2, d2, choice;
    int num, den;

    printf("Enter numerator, denominator of first fraction: ");
    scanf("%d%d", &n1, &d1);
    printf("Enter numerator, denominator of second fraction: ");
    scanf("%d%d", &n2, &d2);

    do
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                num = n1 * d2 + n2 * d1;
                den = d1 * d2;
                printf("Addition = %d/%d", num, den);
                break;
            case 2:
                num = n1 * d2 - n2 * d1;
                den = d1 * d2;
                printf("Subtraction = %d/%d", num, den);
                break;
            case 3:
                num = n1 * n2;
                den = d1 * d2;
                printf("Multiplication = %d/%d", num, den);
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Invalid choice");
        }
    } while(choice != 4);
    return 0;
}
