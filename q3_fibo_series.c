#include<stdio.h>

int main()
{
    int n1 = 1, n2 = 1, n3, i, n;

    printf("Enter the number: ");
    scanf("%d", &n);
    printf("%d %d", n1, n2);

    for(i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        printf("%4d" , n3);
        n1 = n2;
        n2 = n3;
    }
}