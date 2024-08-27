#include <stdio.h>

void accept_array_elements(int *arr, int size)
{
    int i;
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
    {
        printf("\n%d) Array elements: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display_array_elements(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }
}
void max_number(int *arr, int size)
{
    int i = 0, max = 0;
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMaximum number: %d", max);
}
int main()
{
    int i, size;
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    int arr[size];

    accept_array_elements(arr, size);
    display_array_elements(arr, size);
    max_number(arr, size);
    return 0;
}