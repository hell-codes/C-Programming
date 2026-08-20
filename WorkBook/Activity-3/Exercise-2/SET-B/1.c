#include <stdio.h>
int main()
{
    int i, n, digit, sum, temp;

    for (i = 1; i <= 500; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
