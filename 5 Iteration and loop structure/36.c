// Create a program to find the greatest common divisor (GCD) of two numbers.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int first, second;
    printf("Welcome to GCD Calculator\n");
    printf("Please enter the first number:");
    scanf("%d", &first);
    printf("Now, enter the second number:");
    scanf("%d", &second);

    int min = first > second ? first : second;
    for (int  i = 0; i>= 1; i--)
    {
        if (first % i == 0 && second % i == 0)
        {
            printf("THE GCD of %d and %d is %d", first,second);
            break;
        }
        
    }
    
}