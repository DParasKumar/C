// create a program that categorize a person into different age groups.
/* child-> below 13
    adult->below 60
    teen->below 20
    senior->above 60
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Please Enter your age:\n");
    scanf("%d", &age);

    if (age < 13)
    {
        printf("You are a child");
    }
    else if (age < 20)
    {
        printf("You are teen");
    }
    else if (age < 60)
    {
        printf("You are an adult");
    }
    else
    {
        printf("what are you.");
    }

    return 0;
}
