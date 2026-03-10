// Create a program to find the sum and average of all the elements in an array.

#include<stdio.h>

int sum(int arr[], int size);
int sum(int arr[], int size){
    int addition = 0;
    for (int i = 0; i < size; i++)
    {
        addition += arr[i];
    }
    return addition;
    
}

int main(int argc, char const *argv[])
{
    int arr[10];
    printf("welcome to sum and average of array\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter %dth element:\n",(i+1));
        scanf("%d", &arr[i]);
    }
    
    int addition = sum(arr, 10);
    float avg = addition / 10.0;
    printf("The sum of the numbers is %d and their average is %.2f", addition, avg);
    return 0;
}
