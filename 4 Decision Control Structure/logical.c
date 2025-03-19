#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    char is_indian;
    printf("Welcome to ARTO.\n Please enter your age:");
    scanf("%d", &age);
    printf("Are you an Indian Citizen(Y/N):");
    scanf(" %c",&is_indian);

    if(is_indian == 'Y' || (age>=18 && age <70)){

        printf("You are eligible for a license.");
    }
    else{
        printf("You are not eligible for a license.");
    }
    // if (is_indian=='Y')
    // {
        // if (age<18)
        // {
            // printf("you are not eligible for a license.");
 
            // /* code */
        // }
        // else if (age > 70)
        // {
            // printf("you are not eligible for a license.");
        // }
        // else    
        // {
            // printf("You are eligible for a license.");
        // }
    // }
    // else{
        // printf("Only Indian Citizens can apply");
    // }
    
    

    
    return 0;
}
