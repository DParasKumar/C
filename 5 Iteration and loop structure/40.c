// create a program to check if a number is an armstrong number or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the desired number:\n");
    scanf("%d", &num);
    
    int sum = 0;
    int copy = num;
    while (copy > 0)
    {
        int digit = copy % 10;
        sum += digit * digit * digit;
        copy /= 10;
    }

    if (sum == num)
    {
        printf("the number %d is a armstrong number.", num);
    }
    else
    {
        printf("the number %d is not a armstrong number.", num);
    }
    
    return 0;
}
