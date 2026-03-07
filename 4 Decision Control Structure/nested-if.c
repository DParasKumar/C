<<<<<<< HEAD
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    char is_indian;
    printf("Welcome to ARTO.\n Please enter your age:");
    scanf("%d", &age);
    printf("Are you an Indian Citizen(Y/N):");
    scanf(" %c",&is_indian);
    if (is_indian=='Y')
    {
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
    }
    else{
        printf("Only Indian Citizens can apply");
    }
    
    

    
    return 0;
}
=======
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    char is_indian;
    printf("Welcome to ARTO.\n Please enter your age:");
    scanf("%d", &age);
    printf("Are you an Indian Citizen(Y/N):");
    scanf(" %c",&is_indian);
    if (is_indian=='Y')
    {
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
    }
    else{
        printf("Only Indian Citizens can apply");
    }
    
    

    
    return 0;
}
>>>>>>> 013d0e217c9d130a0e261bcd3d97657869d04c02
