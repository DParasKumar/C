#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum, num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    printf("The sum of two numbers is : %d", sum);
    return 0;
}
