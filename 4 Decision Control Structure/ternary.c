#include <stdio.h>
int main(int argc, char const *argv[])
{
    char gender;
    printf("Please enter your gender?(M/F)");
    scanf(" %c", &gender);
    gender == 'M' ? printf("Male") : printf("Female");
    return 0;
}
