// Create a program using recursion to display the Fibonacci series upto a certian number.

#include<stdio.h>

int fibonacci(int pos);

int fibonacci(int pos){
    if (pos <= 1)
    {
        return pos;
    }

    int current = fibonacci(pos -1) + fibonacci(pos -2);
    return current;
    
}



int main(int argc, char const *argv[])
{
    int terms;

    printf("Welcome to fibonacci by recursion\n");
    printf("Enter the number of terms needed :");
    scanf("%d", &terms);
    
    for (int i = 0; i < terms; i++)
    {
        printf(" %d", fibonacci(i));
    }
    
    
    return 0;
}
