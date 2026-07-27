// create a program that reads integers from a file and calculates their sum.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    const char filename[] = "numbers.txt";

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File could not be opened\n");
        return 1;
    }

    int temp;
    int sum = 0;

    // Reads until fscanf fails to match an integer (EOF or bad input)
    while (fscanf(file, "%d", &temp) == 1)
    {
        sum += temp;
    }

    printf("\nThe sum of all numbers is %d\n", sum); // Bug 2 fix: pass `sum`

    fclose(file);
    file = NULL;

    return 0;
}