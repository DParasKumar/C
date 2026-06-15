// write a program that asks the user for a filename, attempts to open it, and reports wheter the opration was successful or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char filename[100];
    printf("Welcome to file opening tool\n");
    printf("Please enter your file name:");
    scanf("%99s", filename);

    FILE *file = fopen(filename,"r");
    if (file !=NULL)
    {
        printf("\n%s was opened successfully",filename);
        fclose(file);
    }else{
        printf("\nFile was not found");
    }
    
    return 0;
}
