#include <stdio.h>
int main()
{
    int n, i, f = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        f = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
    }
    if (f)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
