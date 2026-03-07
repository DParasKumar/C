// create a program to sum all odd numbers from 1 to specidfied number
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    int i = 1, sum = 0;
    scanf("%d", &num);
    while (i <= num)
    {
        sum += i;
        i += 2;
    }
    
    printf("Sum of all odd numbers from 1 to %d is: %d\n", num, sum);
    return 0;
}
