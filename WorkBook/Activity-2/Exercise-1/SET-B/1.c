#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("Digit");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Alphabet");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Alphabet");
    else
        printf("Special Character");

    return 0;
}
