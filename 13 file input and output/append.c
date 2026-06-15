#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file_pointer;

    file_pointer = fopen("writing.txt", "a");
    if (file_pointer == NULL)
    {
        printf("file could not be opened");
        return 1;
    }

    fprintf(file_pointer, "this text will be added after exisiting text in the file");

    int result = fclose(file_pointer);
    if (result == 0)
    {
        file_pointer = NULL;
    }
    else
    {
        printf("file was not closed properly");
        return 1;
    }

    return 0;
}
