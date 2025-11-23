// create a program to print the area of a square by inputting its side lenght.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int l;
    printf("Enter the Length of the square:\n");
    scanf("%d", &l);
    l= l*l;
    printf("The area of square is :%d",l);
    return 0;
}
