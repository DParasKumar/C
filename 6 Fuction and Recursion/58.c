// Create a program using recursion to check if a number is a palindrome using recursion.

#include <stdio.h>

int reverse(int, int);

int reverse(int num, int rev)
{

    if (num == 0)
    {
        return rev;
    }

    int remainder = num % 10;
    int new_num = num/10;
    int new_rev = rev * 10 + remainder;

    return reverse(new_num, new_rev);
}

int main(int argc, char const *argv[])
{
    int num;

    printf("Welcome to palindrome number checker\n");
    printf("Please enter the number:");
    scanf("%d", &num);
    
    int rev = reverse(num, 0);
    if (num == rev)
    {
        printf("%d is palindrome", num);
    }
    else{
        printf("%d is not palindrome", num);
    }

    return 0;
}
