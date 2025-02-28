// given an integer value, convert it to a floating-point value and point print both.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter your number:\n");
    scanf("%d", &number);

    float floating = number;
    printf("originial numver is : %d", number);
    // or
    printf("float converted is : %f", floating);
    // or
    printf("float converted is %f", (float) number);
    return 0;
}
 