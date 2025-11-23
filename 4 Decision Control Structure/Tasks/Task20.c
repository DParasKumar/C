// Create a program that determines if a number is odd or even.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    // number:
    printf("Please Enter Your number:\n");
    scanf("%d", &num);


    if (num % 2 == 0)  
    // To check if the number is even or not (formulae.)
    {
        printf("The number is even\n");
        /* code */
    }
    else{
        printf("The number is odd\n");
    }
    // goto number;
    return 0;
}
