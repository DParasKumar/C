// call a function get_average that takes five int numbers and returns the average.

#include <stdio.h>

float get_average(int, int, int, int, int);

int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    printf("Welcome to 5 number average calculator");
    printf("Enter 1st number:");
    scanf("%f", &a);
    printf("Enter 2nd number:");
    scanf("%f", &b);
    printf("Enter 3rd number:");
    scanf("%f", &c);
    printf("Enter 4th number:");
    scanf("%f", &d);
    printf("Enter 5th number:");
    scanf("%f", &e);

    printf("The sum of all 5 numbers is : %.2f", get_average(a, b, c, d, e));

    return 0;
}

float get_average(int a, int b, int c, int d, int e)
{
    float sum = a + b + c + d + e;
    // float average = sum / 5;
    return sum / 5;
}