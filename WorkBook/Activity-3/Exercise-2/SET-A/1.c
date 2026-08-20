#include <stdio.h>
int main()
{
    int a, b, i, j, prime;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for (i = a; i <= b; i++)
    {
        if (i <= 1)
            continue;
        prime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
    return 0;
}
