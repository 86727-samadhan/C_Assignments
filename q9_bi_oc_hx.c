#include <stdio.h>
int accept_number()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}

int binary(int n)
{
    if (n == 0)
        return 0;

    return binary(n / 2) * 10 + n % 2;
}

int hexadecimal(int num)
{
    if (num == 0)
        return 0;
    return hexadecimal(num / 16) * 16 + num % 16;
}

int octal(int num)
{
    if (num == 0)
        return 0;

    return octal(num / 8) * 8 + (num % 8);
}

int main()
{
    int num, bin, hex, oct;
    num = accept_number();
    
    bin = binary(num);
    printf("\nBinary of %d is %d", num, bin);

    oct = octal(num);
    printf("\nOctal of %d is %o", num, oct);
    
    hex = hexadecimal(num);
    printf("\nHexdecimal of %d is %x", num, hex);
}
