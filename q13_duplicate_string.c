#include <stdio.h>
#include <string.h>

int main()
{

    char *name[5] = {"Virat", "MSD", "Rohit", "Virat", "Yuvraj"};

    int check[5] = {0};

    printf("Duplicate strings are:\n");

    for (int i = 0; i < 6; i++)
    {

        if (check[i])
            continue;

        for (int j = i + 1; j < 6; j++)
        {

            if (check[j])
                continue;

            if (strcmp(name[i], name[j]) == 0)
            {

                printf("%s\n", name[i]);

                name[j] = 1;

                break;
            }
        }
        check[i] = 1;
    }

    return 0;
}