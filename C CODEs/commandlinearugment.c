#include<stdio.h>
int main(int argc, char const *argv[])
{
    // argc= argument counter
    // argv= argument vector\array
    printf("the value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("this argument at index number %d has value of %s\n",i,argv[i]);
    }
    
    return 0;
}
