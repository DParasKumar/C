#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char name[50];
    printf("Please Enter Your Name:");
    fgets(name, 50, stdin);

    char new_name[50];
    strcpy(new_name, name);
    // strcpy(destination, source)
    printf("%s The copied string is: %s", name, new_name);
    return 0;
}
