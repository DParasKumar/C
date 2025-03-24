// create a program to find the minimum of two numbers using ternary operator.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Please enter your first number:\n");
    scanf("%d",&a);
    printf("Please enter your second number:\n");
    scanf("%d",&b);

    int min = a < b ? a : b;
    printf("Minimum of the two is %d", min);
    return 0;
}
