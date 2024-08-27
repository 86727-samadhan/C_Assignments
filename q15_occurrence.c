#include <stdio.h>
#include <string.h>

int main()
{
    char name[50], ch;
    int i, count = 0;
    printf("Enter the string: ");
    gets(name);

    for (ch = 'A'; ch <= 'z'; ch++)
    {
        count = 0;
        for (i = 0; name[i] != '\0'; i++)
        {
            if (ch == name[i])
                count++;
        }
        if (count > 0)
            printf("\n%c dound in %d times", ch, count);
    }
    return 0;
}