#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    int a, i = 0;
    int *i2;
    while (i < 4555)
    {
        printf("welcome to code ");
        i2 = malloc(344444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }

        i++;
        free(i2); //without this we will face memoy leak..
    }

    printf("Memmory Leak");
    return 0;
}
