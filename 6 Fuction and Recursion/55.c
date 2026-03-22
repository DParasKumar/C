// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the funciton.

#include<stdio.h>

void increment(int);

void increment(int a){
    printf("\n In fucntion Before: Value of a is %d", a);
    a++;
    printf("\n In fucntion After: Value of a is %d", a);
}


int main(int argc, char const *argv[])
{
    int num;
    printf("welcome to showing call by value");
    printf("\n Please enter the number:");
    scanf("%d", &num);

    printf("\n Before: Value of num is %d", num);
    increment(num);
    printf("\n After: Value of num is %d", num);
    

    return 0;
}
