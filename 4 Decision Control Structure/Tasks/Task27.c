// Create a program to calculate the absolute value of a given integer using ternary operator.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter your number\n");
    scanf("%d", &number);

    printf("%d is the absolute value", (number>0? number:-number));
    return 0;
}
