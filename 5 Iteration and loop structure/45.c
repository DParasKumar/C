// create a program using for loop multiplication table for a number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Welcome to multiplication table\n");
    printf("Please enter your number\n");
    scanf("%d",&num);

    for (int  i = 1; i <= 10; i++)
    {
        printf("\n%d X %d = %d", num, i, num * i);
    }
    
    return 0;
}
