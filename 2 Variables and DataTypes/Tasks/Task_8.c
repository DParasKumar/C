// Create a program to define a constant for the mathematical value (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    const float pi = 3.14159;
    int r, circum;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    circum = 2*pi*r;
    printf("The Circumference of circle is %d", circum);
    return 0;
}
