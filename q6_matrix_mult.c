#include <stdio.h>

int main()
{
    int a[5][5], b[5][5], mul[5][5];
    int r, c, i, j, k;

    printf("\nEnter the number of rows: ");
    scanf("%d", &r);

    printf("\nEnter the number of columns: ");
    scanf("%d", &c);

    printf("\nEnter the first matrix element: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the second matrix element: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nMultiply matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%4d", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}