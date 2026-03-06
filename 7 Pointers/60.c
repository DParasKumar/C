// Write a program to change the value of an integer variable using a pointer and the * operator.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 5;
    int *ptr = &num;
    printf("The value of num is %d\n", num);
    *ptr = 87;
    printf("The value of num is %d", num);
    /* code */
    return 0;
}
