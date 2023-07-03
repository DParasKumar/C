#include<stdio.h>
#include<conio.h>

int func1(int b1)
{
    static int myvar = 0;
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    // printf("address of func1 b %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b =344;
    // printf("address of main b %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);   
    int *ptr = &val;
    // printf("the value of func1 is %d",val);
    return 0;
}