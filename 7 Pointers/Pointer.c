#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i =3;
    printf("address of i = %p\n", &i);
    printf("value of i is = %d\n", i);
    printf("value of i = %d", *(&i) );
    return 0;
}
