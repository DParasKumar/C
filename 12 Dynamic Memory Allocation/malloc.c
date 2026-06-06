#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /* code */
    int size;
    printf("Please enter your size:\n");
    scanf("%d", &size);

    // Dynamic memory allocation using malloc
    int *arr = (int *)malloc(sizeof(int) * size);

    if (arr == NULL)
    {
        printf("invalid memory");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter Element number %d", i + 1);
        scanf("%d", &arr[i]);
    }
    long sum = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        sum += arr[i];
    }

    printf("The sum of all elements is : %ld", sum);

    return 0;
}
