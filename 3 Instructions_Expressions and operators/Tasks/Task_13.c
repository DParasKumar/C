// create a program to calculate product of two floating points numbers.
// given an integer value, convert it to a floating-point value and point print both.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float first, second;
    printf("Enter your first number:\n");
    scanf("%f", &first);
    printf("Enter your second number:\n");
    scanf("%f", &second);

    float result = first * second;
    printf("Product is : %f", result);
    return 0;
}
 