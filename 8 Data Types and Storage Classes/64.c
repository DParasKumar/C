// write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20
#include <stdio.h>


long factorial_long(int n);
long long factorial_longlong(int n);

long factorial_long(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial_long(n - 1);
}

long long factorial_longlong(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial_longlong(n - 1);
}

int main()
{
    int num = 20;

    long result_long = factorial_long(num);
    long long result_longlong = factorial_longlong(num);

    printf("Factorial of %d using long: %ld\n", num, result_long);
    printf("Factorial of %d using long long: %lld\n", num, result_longlong);

    return 0;
}