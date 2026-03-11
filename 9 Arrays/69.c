// create a program to check if a given array is sorted or not.
#include <stdio.h>

int is_sorted(int arr[], int size)
{
    int increasing = 1;
    int decreasing = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            decreasing = 0;
        }
        else if (arr[i] < arr[i - 1])
        {
            increasing = 0;
        }
    }

    return increasing || decreasing;
}

int main(int argc, char const *argv[])
{
    printf("welcome to checking if array is sortred or not \n");

    int arr1[6] = {5, 8, 9, 9, 10, 15};    // increasing order sorted
    int arr2[6] = {76, 70, 50, 12, 12, 0}; // decreasing order sorted
    int arr3[6] = {87, 0, 67, -98, 5, 5};  // unorder sorted

    if (is_sorted(arr1, 6))
    {
        printf("\nFirst array is sortred");
    }
    else
    {
        printf("\nFirst array is not sortred");
    }
    if (is_sorted(arr2, 6))
    {
        printf("\nSecond array is sortred");
    }
    else
    {
        printf("\nSecond array is not sortred");
    }
    if (is_sorted(arr3, 6))
    {
        printf("\nThird array is sortred");
    }
    else
    {
        printf("\nThird array is not sortred");
    }

    return 0;
}