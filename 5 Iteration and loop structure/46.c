// create a program to check wheterh a given number is prime using while.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Welcome to prime checker\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime", num);
            return 0;               
        }
        
        /* code */
    }
    printf("%d is prime", num);
    
    return 0;
}
