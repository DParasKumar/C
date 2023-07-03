#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
int avg(int a, int b)
{
    return (a+b)/2;
}

void GreetHello(int (*fptr)(int, int))
{
    printf("Hello friend\n");
    printf("The sum of 2 and 7 is %d\n", fptr(2, 7));
}

void GreetGM(int (*fptr)(int, int))
{
    printf("Good Morning friend\n");
    printf("The sum of 2 and 7 is %d\n", fptr(2, 7));
}

void GreetGudEve(int (*fptr)(int, int))
{
    printf("Good Evening friend\n");
    printf("The avg of 2 and 8 is %d\n", fptr(2, 8));
}

int main()
{
    int (*ptr)(int, int);
    ptr=avg;
    GreetGudEve(ptr);
    return 0;
}