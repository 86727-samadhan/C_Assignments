#include <stdio.h>
#include <string.h>

int mystrlen(char *nm)
{
    int i = 0;
    while (nm[i] != '\0')
    {
        i++;
    }
    return i;
}
void mystrrev(char *nm, int len)
{
    char temp[20];
    int i=0, j = len - 1;
    while (nm[i] != '\0')
    {
        temp[i] = nm[j];
        j--;
        i++;
    }
    temp[i] = '\0';
    printf("%s", temp);
}
int main()
{
    char name[20];
    int len;
    printf("Enter the name: ");
    scanf("%s", &name);

    len = mystrlen(name);
    mystrrev(name, len);
    return 0;
}
