#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    
    printf("the value of a is %d\n", *( (int*)ptr   ));
    ptr = &b;
    printf("the value of b is %f\n", *( (float*)ptr   ));
    return 0;
}
`