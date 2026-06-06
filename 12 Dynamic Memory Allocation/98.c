// Create an array with calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the remaining numbers.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    printf("Welcome to the world of dynamic reandoms\n");
    int *arr = (int *)calloc(10, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory ERROR!!");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }

    printf("\nHere are your random number:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    int *shrinked = (int*) realloc(arr, 5*sizeof(int));
    if (shrinked == NULL)
    {
        printf("Memmory ERROR!!");
        arr = NULL;
        return 1;
    }
    arr = shrinked;
    
    free(arr);
    arr = NULL;
    
    return 0;
}
