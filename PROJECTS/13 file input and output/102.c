// write a program that takes uers input and writes it to a file, ensuring each entry is on a new line.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    printf("Welcome to our writing user input to file\n");
    FILE *file = fopen("user-input.txt", "w");
    if (!file)
    {
        printf("Could not open file.");
        return 1;
    }

    char input[100];
    while(1)
    {
        /* code */
        fgets(input, 100, stdin);
        if (strcmp(input, "exit\n") == 0) break;
        
        fputs(input, file);

    } 
    fclose(file);
    file = NULL;
    
    
    return 0;
}
