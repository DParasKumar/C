// create a program to calculate perimeter of a rectangle.
// perimeter of rectange abcd = a+b+c+d]
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int a,b,c,d;
    printf("Enter side a:\n");
    scanf("%d",&a);
    printf("Enter side b:\n");
    scanf("%d",&b);
    printf("Enter side c:\n");
    scanf("%d",&c);
    printf("Enter side d:\n");
    scanf("%d",&d);

    int result = a+b+c+d;
    printf("Perimeter of rectange is %d :\n", result);
    return 0;
}
