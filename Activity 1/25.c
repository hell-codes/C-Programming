#include <stdio.h>
int main() 
{
    int choice, num, a, b, c, year;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Positive, Negative, or Zero\n");
        printf("3. Check Leap Year\n");
        printf("4. Find Maximum of Three Numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Enter a number: ");
                    scanf("%d", &num);
                if (num % 2 == 0)
                    printf("%d is even.\n", num);
                else
                    printf("%d is odd.\n", num);
                break;

            case 2: printf("Enter a number: ");
                    scanf("%d", &num);
                if (num > 0)
                    printf("Positive\n");
                else if (num < 0)
                    printf("Negative\n");
                else
                    printf("Zero\n");
                break;

            case 3: printf("Enter a year: ");
                    scanf("%d", &year);
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                    printf("%d is a leap year.\n", year);
                else
                    printf("%d is not a leap year.\n", year);
                break;

            case 4: printf("Enter three numbers: ");
                    scanf("%d %d %d", &a, &b, &c);           
                if (a >= b && a >= c)
                    printf("%d is the largest.\n", a);
                else if (b >= a && b >= c)
                    printf("%d is the largest.\n", b);
                else
                    printf("%d is the largest.\n", c);
                break;

            case 5: printf("Exiting program. Goodbye!\n");
                    break;
            default: printf("Invalid choice. Try again.\n");    
        }
    } while (choice != 5);
    return 0;
}
