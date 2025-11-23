#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Welcome to ARTO.\n Please enter your age:");
    scanf("%d", &age);

    if (age<18)
    {
        printf("you are not eligible for a license.");
        
        /* code */
    }
    else if (age > 70)
    {
        printf("you are not eligible for a license.");
    }
    else    
    {
        printf("You are eligible for a license.");
    }

    
    return 0;
}
