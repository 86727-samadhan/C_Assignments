#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("\nAlphabet");
        if (ch >= 65 && ch <= 90)
            printf("\nUpeercase");
        else if (ch >= 97 && ch <= 122)
            printf("\nLowercase");
        else
            printf("\nInvalid");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("\nDigit");
    }
    else
    {
        printf("\nSpecial symbol !!!!");
    }
    return 0;
}