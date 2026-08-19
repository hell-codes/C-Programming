#include <stdio.h>
int main()
{
    char ch;
    int alphabets = 0, digits = 0;

    printf("Enter characters: \n");

    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            alphabets++;
        else if (ch >= '0' && ch <= '9')
            digits++;
    }
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d", digits);

    return 0;
}
