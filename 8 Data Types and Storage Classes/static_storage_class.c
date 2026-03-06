#include<stdio.h>
void incrementCounter(){
    static int counter = 0;
    counter++;
    printf("Counter is %d\n", counter);
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; i++)
    {
        incrementCounter();
    }
    
    return 0;
}
