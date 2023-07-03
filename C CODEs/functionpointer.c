#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main(int argc, char const *argv[])
{
    printf("the sum of 1 and 2 is %d\n", sum(1, 2));
    // functionpointer
    int (*fPtr)(int, int); // declaring a funtion pointer.(syntax.)
    fPtr = &sum;           // creating a function pointer.
    int d = (*fPtr)(4, 6); // dereferencing a function pointer
    printf("the value of d is %d\n", d);
    return 0;
}
