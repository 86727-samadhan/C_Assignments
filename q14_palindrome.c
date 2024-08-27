#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    int length, i, count = 0;
    printf("Enter the string: ");
    gets(name);

    for(length = 0; name[length]!='\0';length++);
    // printf("\nLength: %d", length);

    for(i = 0; i < length; i++)
    {
        if(name[i] != name[length - i - 1])
        {
            count = 1;
            break;
        }
    }

    if(count == 0)
        printf("%s is palindrome string", name);
    else    
        printf("%s is not palindrome string", name);
    return 0;
}