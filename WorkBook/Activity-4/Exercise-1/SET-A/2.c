#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    double x, y;

    do
    {
        printf("\n1. Power");
        printf("\n2. Square Root");
        printf("\n3. Floor");
        printf("\n4. Ceiling");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &x, &y);
                printf("Power = %.2lf", pow(x, y));
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%lf", &x);
                printf("Square Root = %.2lf", sqrt(x));
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%lf", &x);
                printf("Floor = %.2lf", floor(x));
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%lf", &x);
                printf("Ceiling = %.2lf", ceil(x));
                break;
            case 5:
                printf("Exit");
                break;
            default:
                printf("Invalid choice");
        }
    } while(choice != 5);
    return 0;
}
