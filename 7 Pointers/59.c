// Write a program that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int *ptr = &num;
    printf("Welcome to showcasing integer pointers.\n");
    printf("Please enter the value: ");
    scanf("%d", ptr);
    printf("\nThe value of number is : %d",*ptr);
    printf("\nThe value of number is : %d",num);
    return 0;
}
