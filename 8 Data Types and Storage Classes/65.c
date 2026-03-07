// Write a c program that initializes an unsigned int to its maximum possible value and an int to a negative number. Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow.
#include<limits.h>
#include<stdio.h>



int main(int argc, char const *argv[])
{
    unsigned int positive = UINT_MAX;
    int normal = INT_MAX;

    printf("Max value of unsigned int %u\n", positive);
    printf("Max value of normal int %d\n", normal);

    positive++;
    normal++;
    
    printf("Max value of unsigned int %u\n", positive);
    printf("Max value of normal int %d\n", normal);


    return 0;
}
