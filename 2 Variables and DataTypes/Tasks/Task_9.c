//Crea a program to print the area of a circle by inputting its radius
#include<stdio.h>
int main(int argc, char const *argv[])
{
    const float pi = 3.14159;
    int r, area;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    area = pi*r*r;
    printf("The Area of circle is %d", area);
    return 0;
}
