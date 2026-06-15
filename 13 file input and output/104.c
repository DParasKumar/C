// create a program that performs both reading and writing operations on a file called data.txt
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("welome to the bizzare world of  reading and writing\n");
    FILE *file = fopen("data.txt", "r+");
    if (!file)
    {
        printf("Error opening file.");
        return 1;
    }
    char buffer[100];
    fgets(buffer,100,file);
    printf("Reading from file I found: %s", buffer);

    fseek(file, 0,SEEK_END);
    fputs("\nThis message was written by program\n", file);
    fclose(file);
    file = NULL;
    
    return 0;
}
