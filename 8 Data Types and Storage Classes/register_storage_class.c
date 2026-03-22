#include<stdio.h>
int main(int argc, char const *argv[])
{
    register int counter;
    for (counter = 0; counter < 5; counter++)
    {
        printf("Counter is %d\n", counter);
    }
    
    return 0;
}
