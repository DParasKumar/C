#include<stdio.h>

int factorial(int n){

    if (n>= 1)
    {
        return n*factorial(n-1);
    }else{
        return 1;
    }
    
}

int main(int argc, char const *argv[])
{
    int number =20;
    long result;
    result = factorial(number);
    printf("The factorial of %d is %ld\n", number, result);
    
    return 0;
}
