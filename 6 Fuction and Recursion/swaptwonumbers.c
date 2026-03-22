#include <stdio.h>
void tryswap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside try swap - a : %d, b : %d\n", a, b);
}

int main(int argc, char const *argv[])
{
    int x = 10, y = 20;
    printf("before tryswap - x: %d, y: %d\n", x, y);
    tryswap(x, y);
    printf("After swap - x: %d, y: %d\n", x, y);
    return 0;
}

