#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name[50];
    printf("Please Enter Your Name:");
    fgets(name, 50, stdin);

    int size = strlen(name);
    printf("The Length of your name is %d", size);
    return 0;
}
