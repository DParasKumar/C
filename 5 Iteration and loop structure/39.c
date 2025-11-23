// create a program to print the fibonacci series up to a certain number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Welcome to printing fibonacci series\n");
    printf(" Please enter the number upto which series should be printed:");
    scanf("%d", &num);

    printf(" 0");
    if (num > 0) {
        printf(" 1");
    }
     int prev = 0;
     int next = 1;
     while (prev + next <= num)
     {
        int temp = prev + next;
        printf(" %d", temp);
        prev = next;
        next = temp;
     }
     
    
    return 0;
}
