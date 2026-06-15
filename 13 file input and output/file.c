#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file_pointer;
    char text[100];

    file_pointer = fopen("coding.txt", "r");
    if (file_pointer == NULL)
    {
        printf("invalid file");
        return 1;
    }

    // fgets(text, 100, file_pointer);
    // printf("\n%s", text);

    int c;
    do
    {
        c = fgetc(file_pointer);
        printf("%c", c);
    } while (c != EOF);

    int result = fclose(file_pointer);
    if (result == 0)
    {
        file_pointer = NULL;
        /* code */
    }
    else
    {
        printf("fiel was not closed properly");
    }

    return 0;
}
