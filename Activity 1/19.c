#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) 
    {
        printf("Positive ");
        if (num < 10) 
        {
            printf("single-digit number.\n");
        } 
        else if (num < 100) {
            printf("double-digit number.\n");
        } 
        else {
            printf("triple-digit or more number.\n");
        }
    } 
    else if (num < 0) {
        printf("Negative ");
        if (num > -10) 
        {
            printf("single-digit number.\n");
        } 
        else if (num > -100) {
            printf("double-digit number.\n");
        } 
        else {
            printf("triple-digit or more number.\n");
        }
    } 
    else {
        printf("Zero\n");
    }
    return 0;
}
