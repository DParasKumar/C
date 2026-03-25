#include<stdio.h>
int main(int argc, char const *argv[])
{
    char c[] = "\nabcd";
    printf("%s", c);
    char d[50] = "\nabcd\n";
    printf("%s", d);
    char a[] = {'a','b','c','d','\0'};
    printf("%s", a);
    return 0;
}
