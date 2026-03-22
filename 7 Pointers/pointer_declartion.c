#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i =3;
    int *j; //ponter declaration
    

    j = &i;

    printf("Address of i = %p\n",&i);
    printf("Address of i = %p\n", j);
    printf("Address of j = %p\n",&j);
    printf("Value of j = %p\n",j);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n",*(&i));
    printf("Value of j = %d\n",*j);
    return 0;
}
