#include <stdio.h>

float max(float a, float b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    float a, b;

    printf("Please enter the first number: ");
    scanf("%f", &a);

    printf("Please enter the second number: ");
    scanf("%f", &b);

    printf("The larger number is: %f\n", max(a, b));
    return 0;
}