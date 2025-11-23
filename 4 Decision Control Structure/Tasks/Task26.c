// create a program to find if the given number is even or odd using ternary operator.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    // number:
    printf("Please Enter Your number:\n");
    scanf("%d", &num);


    num % 2 == 0 ? printf("The number is even\n") : printf("The number is odd\n");
    return 0;
}
