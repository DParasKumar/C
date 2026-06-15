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
    int read_status;
    do
    {
        read_status = fscanf( file,"%d", &temp);
        sum += temp;
        /* code */
    } while (read_status == 1);

    printf("\n the sum of all numbers is %d");
    fclose(file);
    file = NULL;

    return 0;
}
