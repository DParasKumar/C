#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a = '3'; //char takes 1 byte   //int takes 4 byte
    char *ptr = &a;
    printf("address of a is %d\n", ptr);
    ptr++; //it can be ptr-- also
    printf("%d\n",ptr);
    printf("address of a is %d\n", ptr+4); //it can be ptr-4 also
    return 0;
}
