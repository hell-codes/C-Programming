#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    int choice;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    do
    {
        printf("\n1. Check it is an alphabet");
        printf("\n2. Check it is a digit");
        printf("\n3. Check it is lowercase");
        printf("\n4. Check it is uppercase");
        printf("\n5. Convert to uppercase");
        printf("\n6. Convert to lowercase");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(isalpha(ch))
                    printf("It is an alphabet");
                else
                    printf("It is not an alphabet");
                break;
            case 2:
                if(isdigit(ch))
                    printf("It is a digit");
                else
                    printf("It is not a digit");
                break;
            case 3:
                if(islower(ch))
                    printf("It is lowercase");
                else
                    printf("It is not lowercase");
                break;
            case 4:
                if(isupper(ch))
                    printf("It is uppercase");
                else
                    printf("It is not uppercase");
                break;
            case 5:
                ch = toupper(ch);
                printf("Uppercase character = %c", ch);
                break;
            case 6:
                ch = tolower(ch);
                printf("Lowercase character = %c", ch);
                break;
            case 7:
                printf("Exit");
                break;
            default:
                printf("Invalid choice");
        }
    } while(choice != 7);

    return 0;
}
