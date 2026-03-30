#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char first_name[50];
    char last_name[50];
    printf("Please Enter first Your Name:");
    fgets(first_name, 50, stdin);
    printf("Please Enter last Your Name:");
    fgets(last_name, 50, stdin);

    
    strcat(first_name, last_name);
    printf("Your Final Name is: %s", first_name);
    return 0;
}
