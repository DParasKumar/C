#include<stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int length = 10;    //Length of the rectangle (can't be negative)
    unsigned int width = 10;     //width of the rectangle (can't be negative)
    unsigned int area;           //Area of the rectangle

    int temperature = -15;      //Temperature (can be negative and positive.)

    // Calculating the area of the rectangle
    area = length * width;

    printf("The area of the rectangle is %u square units\n", area);
    printf("The current temperature is %d degree celsius\n", temperature);
    return 0;
}
