// create a program to calculate compound interest.
// compund interest = p(1+R/100)

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    
    float principle, rate ,time;
    printf("Please enter the priciple:");
    scanf("%f", &principle);
    printf("Enter the rate");
    scanf("%f", &rate);
    printf("Enter the time");
    scanf("%f", &time);

    float interest = principle * pow((1+ rate /100),time);

    printf("%f", interest);

    return 0;
}
