// write a program that copies one text file's contents to another stopping when it reaches EOF of the source file.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Welcome to the copying system:\n");
    FILE *source_file = fopen("coding.txt", "r");
    FILE *destination_file = fopen("Copy.txt", "w");

    if (source_file == NULL || destination_file == NULL)
    {
        printf("error while openeing file.");
        return 1;
    }


    // infinite loop
    while (1)
    {
        char c = fgetc(source_file);
        if (c == EOF)
        {
            break;
        }
        fputc(c,destination_file);
        printf(".");
    }

    fclose(source_file);
    fclose(destination_file);
    destination_file = source_file = NULL;
    
    
    

    return 0;
}
