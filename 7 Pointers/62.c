// implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference. Write a main fucntion to test it with different values.

#include<stdio.h>
void minmax(int*, int*, int*, int*);

void minmax(int *a, int *b, int *min, int *max)
{
    if (*a < *b)
    {
        *min = *a;
        *max = *b;
    }
    else{
        *min = *b;
        *max = *a;
    }
    
}


int main(int argc, char const *argv[])
{
    int first, second, min, max;
    printf("Welcome to finding min and max\n");
    printf("Please enter the first number:");
    scanf("%d",&first);
    printf("Please enter the second number:");
    scanf("%d",&second);

    minmax(&first, &second, &min, &max);
    printf("Between %d and %d , minimum is %d and maximum is %d", first, second, min, max);
    return 0;
}
