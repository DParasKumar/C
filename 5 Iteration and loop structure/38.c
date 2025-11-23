// create a program to reverse the digits of a number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the numbers you want to reverse:\n");
    printf("Please enter the numbers:");
    scanf("%d",&num);

    int reverse = 0;
    int copy = num;
    while (copy > 0){
        reverse = (reverse * 10) + (copy % 10);
        copy /= 10;

    }


    printf("The reversed number is %d", reverse);

    return 0;
}
