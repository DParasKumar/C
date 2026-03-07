// Write a function that adds that takes 4 int parameters and returns the sum.

#include<stdio.h>

int add (int, int, int, int);

int add(int a, int b, int c, int d){
    int sumofall = a + b + c + d;
    return sumofall;
}

int main(int argc, char const *argv[])
{
    int result = add(1,2,3,4);
    printf("%d", result);


    return 0;
}

