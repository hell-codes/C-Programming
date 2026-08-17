#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 7 == 0)
        printf("Divisible by 5 and 7");
    else
        printf("Not divisible by 5 and 7");

    return 0;
}
