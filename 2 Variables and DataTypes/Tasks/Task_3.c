// create a program to input name of the person and respnd with "Welcome Name to KG Coding".
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[20];
    printf("Please Enter Your Name:");
    scanf("%19s", name);
    printf("Welcome %s to KG Coding", name);
    return 0;
}
