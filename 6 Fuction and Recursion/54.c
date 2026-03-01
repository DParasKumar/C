// create a function max that takes two float arguments and returns the larger value.
#include<stdio.h>

float max(float,float);

float max(float a , float b){
    if (a>b)
    {
        printf("first number is greater: %f", a);
    }
    else{
        printf("Second number is greater : %f", b);
    }
    
}


int main(int argc, char const *argv[])
{
    max(4.5,3.5);
    return 0;
}
