// Create a program that takes two numbers and shows result of all arithmetic operators(+,-,*,/,%).
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int a,b;
    printf("Please enter the first number:\n");
    scanf("%d",&a);
    printf("Now, enter the second number\n");
    scanf("%d",&b);

    printf("Here are the results of the operations.");
    printf("%d + %d = %d\n",a,b,(a+b));
    printf("%d - %d = %d\n",a,b,(a-b));
    printf("%d / %d = %d\n",a,b,(a/b));
    printf("%d * %d = %d\n",a,b,(a*b));
    printf("%d % %d = %d\n",a,b,(a%b));

    return 0;
}
