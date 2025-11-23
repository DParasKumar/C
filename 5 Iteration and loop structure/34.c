//create a program that computes the sum of the digits of an integer.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    int sum = 0;
    while (num > 0) 
    {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }

    printf("The sum of digits of %d is %d", num,sum);
    return 0;
}
