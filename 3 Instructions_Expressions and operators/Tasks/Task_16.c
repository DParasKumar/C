<<<<<<< HEAD
// create a program to calcuate simple interest.
// simple interest = (P X T X R)/100

#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    float principle, rate ,time;
    printf("Please enter the priciple:");
    scanf("%f", &principle);
    printf("Enter the rate");
    scanf("%f", &rate);
    printf("Enter the time");
    scanf("%f", &time);

    float interest = (principle * rate * time)/100;

    printf("%f", interest);

    return 0;
}
=======
// create a program to calcuate simple interest.
// simple interest = (P X T X R)/100

#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    float principle, rate ,time;
    printf("Please enter the priciple:");
    scanf("%f", &principle);
    printf("Enter the rate");
    scanf("%f", &rate);
    printf("Enter the time");
    scanf("%f", &time);

    float interest = (principle * rate * time)/100;

    printf("%f", interest);

    return 0;
}
>>>>>>> 013d0e217c9d130a0e261bcd3d97657869d04c02
