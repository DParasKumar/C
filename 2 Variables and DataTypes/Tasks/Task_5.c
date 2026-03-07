// Create a program that declares one variable of the fundamental data types(int,float,double,char) and prints their size using sizeof() operator.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int integer;
    float decimal;
    double doub;
    char character;
    printf("The size of int is %lu\n", sizeof(integer));
    printf("The size of int is %lu\n", sizeof(decimal));
    printf("The size of int is %lu\n", sizeof(character));
    printf("The size of int is %lu\n", sizeof(doub));
    return 0;
}
