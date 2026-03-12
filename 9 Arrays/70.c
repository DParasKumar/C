// Create a program to return a new array deleting a specific element.
#include <stdio.h>

void delete(int arr[], int size, int new_arr[], int *new_size, int element)
{

    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != element)
        {
            new_arr[j++] = arr[i];
        }
    }
    *new_size = j;
}
void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    printf("Welcome to deleting elements\n");
    int arr[] = {2, 5, 7, 7, 9, 10, 1, 0};

    int new_arr[8];
    int new_size;

    delete(arr, 8, new_arr, &new_size, 5);
    printf("The array after deleting 5 is:\n");
    print_arr(new_arr, new_size);

    delete(arr, 8, new_arr, &new_size, 7);
    printf("\nThe array after deleting 7 is:\n");
    print_arr(new_arr, new_size);

    delete(arr, 8, new_arr, &new_size, 8);
    printf("\nThe array after deleting 8 is:\n");
    print_arr(new_arr, new_size);
    return 0;
}
