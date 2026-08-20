#include <stdio.h>
int main()
{
    int n, i, num, temp, digit;
    int maxSum = -1, maxNum;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        temp = num;
        int sum = 0;
        while (temp != 0)
        {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxNum = num;
        }
    }
    printf("Number = %d", maxNum);
    return 0;
}
