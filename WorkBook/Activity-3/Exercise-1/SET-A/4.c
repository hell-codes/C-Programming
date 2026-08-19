#include <stdio.h>
int main()
{
    char ch;
    int n, i;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%c ", ch + i);

    return 0;
}
