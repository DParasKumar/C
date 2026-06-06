// Create a program that uses malloc to dynamically allocate an array for a specifid number of float values entered by the user and then stores user-entered numbers into it.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size;
    printf("Welcome to our world of dynamic arrays\n");
    printf("Please enter the number of elements:");
    scanf("%d", &size);

    float *arr = (float *)malloc(size * sizeof(float));

    if (arr == NULL)
    {
        printf("Invalid size");
    }
    

    for (int i = 0; i < size; i++)
    {
        printf("Now enter elements number %d:", (i + 1));
        scanf("%f", &arr[i]);
    }

    printf("\n Here are your elements: ");
    for (int i = 0; i < size; i++)
    {
        printf(" %.2f", arr[i]);
    }
    
    free(arr);
    arr = NULL;

    
    return 0;
}
