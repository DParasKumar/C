#include <stdio.h>
#include <stdlib.h>
int *functiondangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main(int argc, char const *argv[])
{
    // case 1: de allocation of a memory block.
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // is now a dangling pointer

    // case 2: function returingi local variable address.
    int *dangPtr = functiondangling(); //ptr is now a danling pointer.

    // case 3: if a variable goes out of scope.
    int * danglingPtr3:
    {
        int a =12;

        danglingPtr3 = &a;
    }
    // here variable a goes out of scope which means danglingPtr 3 is pointing to a location which is free and hence danglingptr3 is now 
    // dangling pointer.
    return 0;
}
