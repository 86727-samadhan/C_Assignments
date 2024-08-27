#include<stdio.h>


int accept_num()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}

int factorial_num(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int num, res;
    num = accept_num();
    res = factorial_num(num);
    printf("Factorial of %d is %d", num, res);
}