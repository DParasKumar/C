//write a function that calucates the factorial of a give number.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int i =1 ;
    int factorial = 1;
    while (i<=num)
    {
        factorial = factorial * i;
        i++;
    }
    printf("Factorial of %d is: %d\n", num, factorial);
    return 0;
}
