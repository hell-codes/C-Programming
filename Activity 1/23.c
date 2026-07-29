#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("'%c' is a vowel.\n", ch);
            break;
        default:
            if (ch >= 'a' && ch <= 'z')
            {
                printf("'%c' is a consonant.\n", ch);
            } 
            else {
                printf("Invalid input.\n");
            }
    }

    return 0;
}
