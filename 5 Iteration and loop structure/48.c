// create a program using continue to print only even numbers using conitue for odd numbers.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int max;
    printf("Welcome to printing even numbers:\n");
    printf("Please enter the max numbers: ");
    scanf("%d", &max);

    for (int i = 0; i < max; i++)
    {
        if (i % 2 == 1)
        {
            continue;
        }
        
        printf("%d ", i);
    }
    
    return 0;
}
