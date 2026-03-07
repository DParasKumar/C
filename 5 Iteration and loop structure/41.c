// create a program to verify if a number is palindrome or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Welcome to palindrome checker\n");
    printf("Please enter the number:");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;
    while (copy > 0)
    {
        reverse = (reverse * 10) + (copy % 10);
        copy /= 10;
    }

    if (reverse == num)
    {
        printf("The number %d is palindrome", num);
        
    }else{
            printf("The number %d is not palindrome",num);
        }
    
    
    return 0;
}
