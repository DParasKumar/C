#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int a =334;
    int *ptr; //this is a wild pointer for now (can contain any address)
    // *ptr=34; //this is not a good thing to do.
    ptr = &a; //ptr is no long a wild pointer now.
    printf("the value of a is %d\n",*ptr);
    return 0;
}
