#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[50];
    printf("Please Enter Your Name: ");
    gets(name); // UNSAFE : Do not use in production code.

    puts(name);

    printf("Now enter your nickname: ");
    fgets(name, sizeof(name), stdin);
    puts(name);


    // printf("Good Morning %s", name);
    return 0;
}
