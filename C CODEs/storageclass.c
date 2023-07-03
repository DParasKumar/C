#include <stdio.h>
#include <stdlib.h>
#include "temp.c"
// int myVar =0; //gloval variable is also known as extern variable.
int myfunc(int a, int b)
{
    // auto int myVar;
    static int myVar;
    ;
    // myVar = a + b;
    return myVar;
}

// int myVar = 343;
int main(int argc, char const *argv[])
{
    // Declaration - telling the compiler about the variable (no space reserved)
    // definition - declartion + space reservation.
    // int myVar = myfunc(3, 5);
     myVar = myfunc(3, 5);
     myVar = myfunc(3, 5);
     myVar = myfunc(3, 5);
     myVar = myfunc(3, 5);
    printf("the myVar is %d\n", myVar);
    return 0;
}
