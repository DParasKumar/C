#include<stdio.h>
int main(int argc, char const *argv[])
{
    float f;
    printf("Welcome to temp converter");
    printf("Please enter the temp in f:");
    scanf("%f", &f);

    float c = (f-32) * 5 /9;
    printf("temp in c is : %f",c);
    return 0;
}
