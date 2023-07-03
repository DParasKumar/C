#include <stdio.h>
int sub(int *a, int *b)
{
    *a = *a + *b;
    *b = (*a - *b) - *b;
}
int main(int argc, char const *argv[])
{
    int a = 4, b = 3;
    sub(&a, &b);
    printf("the value of a and b is %d\n,%d\n", a, b);
    return 0;
}
/* Example
#include<stdio.h>
int swap(int *a)
{
    *a = 457;
}
int main(int argc, char const *argv[])
{
    int a=43;
    printf("the value of a is %d\n",a);
    swap(&a);
    printf("the value of a now is %d\n", a);
    return 0;
}

*/