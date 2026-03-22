// Create a program to reverse an array.
#include <stdio.h>
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
void reverse(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        /* code */
        swap(&arr[i], &arr[size - 1 - i]);
    }
}
void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{
    printf("Welcome to reversing arrays\n");

    int arr1[] = {1, 2, 5, 7, 8, 9, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    printf("\nOriginal array 1:\n");
    print_arr(arr1, 8);

    reverse(arr1, 8);

    printf("\nReversed array 1:\n");
    print_arr(arr1, 8);

    printf("\n\nOriginal array 2:\n");
    print_arr(arr2, 5);

    reverse(arr2, 5);

    printf("\nReversed array 2:\n");
    print_arr(arr2, 5);

    return 0;
}