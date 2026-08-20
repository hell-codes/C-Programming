#include <stdio.h>
int main()
{
    int start, end, n, i, j;

    printf("Enter starting table, ending table and number of multiples: ");
    scanf("%d%d%d", &start, &end, &n);

    for (i = 1; i <= n; i++)
    {
        for (j = start; j <= end; j++)
        {
            printf("%d x %d = %-4d", j, i, j * i);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
