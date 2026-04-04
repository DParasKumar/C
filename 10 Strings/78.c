// Read a line of text from the user using fgets and then print it using puts.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[240] ;
    printf("Welcome to showing use of fgets and puts\n");
    printf("Please, Enter your full name:");
    fgets(name, sizeof(name), stdin);

    printf("The Name you entered is :");
    puts(name);
    
    return 0;
}
