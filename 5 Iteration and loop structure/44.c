// Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should then be displayed.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int sum = 0;
     printf("Welcome to number Adder\n");
    do
    {
        printf("Please enter your number:");
        scanf("%d", &num);
        sum += num;
    } while (num !=0);

    printf("The sum of all your numbers is: %d", sum);
    
    return 0;
}
