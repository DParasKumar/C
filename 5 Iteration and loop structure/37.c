// create a program to check wheterh a given number is prime using while.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Welcome to prime checker\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    int i = 2;
    while (i < num)
    {
        if (num % i ==0)
        {
            printf("%d is not prime", num);
            return 0;
        }
        
    }
    

    printf("%d is prime", num);
    
    return 0;
}
