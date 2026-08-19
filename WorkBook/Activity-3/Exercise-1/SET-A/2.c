#include <stdio.h>
int main()
{
    int x, y, i, sum = 0;

    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (i = x; i <= y; i++)
        sum += i;

    printf("Sum = %d", sum);

    return 0;
}
