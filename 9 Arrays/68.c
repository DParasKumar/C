// Create a program to find the maximum and minimum element in an array.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10];
    printf("welcome to maximuma and minimum of  array\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter %dth element:\n",(i+1));
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    int min = arr[0]; 
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
               
    }
    printf("The value of max is %d and the value of min is %d", max,min);   
   return 0;
}
