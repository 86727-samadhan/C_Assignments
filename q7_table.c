#include<stdio.h>

int main()
{
    int num, i, table;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("\nTable = num * i");
    for(i = 1; i <= 10; i++)
    {
        // table = num * i;
        printf("%d * %d = %d \n", num, i, num * i);
    }
    return 0;
}