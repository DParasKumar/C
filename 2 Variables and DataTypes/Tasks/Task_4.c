// Create a program to declare two integer variables assign them values, and display their values.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("please enter first number:");
    scanf("%d",&a);
    printf("please enter second number:");
    scanf("%d",&b);

    printf("The tow numbers you entered are %d and %d",a,b);
    return 0;
}
