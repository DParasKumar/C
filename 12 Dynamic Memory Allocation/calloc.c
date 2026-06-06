#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size;
    printf("Please enter your size:\n");
    scanf("%d", &size);

    int *arr = (int *)calloc(size, sizeof(int));

    if (arr == NULL)
    {
        printf("Invalid memory\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    long sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("The sum of all elements is: %ld\n", sum);

    return 0;
}