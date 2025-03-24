// Create a program that determines if a number is positive, negative or zero.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Please Enter Your Number:");
    scanf("%d", &num);
    
    if (num > 0)
    {
        printf("The number is positive\n");
        /* code */
    }
    else if( num < 0)
    {
        printf("The number is negative\n");
    }
    else{
        printf("the number is zero");
    }
    
    return 0;
}
