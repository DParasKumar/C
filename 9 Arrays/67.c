// create a program to find number of occurrences of an element in an array.
#include<stdio.h>

int occurrences(int arr[], int size, int element);
int occurrences(int arr[], int size, int element){
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            counter++; 
        }
        
    }
    return counter;
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {1,1,2,3,4,4,5,6,7,7,8,9,10,10};
    printf("welcome to finding element occurrrences\n");
    int result =  occurrences(arr,10,1);
    printf("The number of occurences of 1 are %d\n", result);
    result =  occurrences(arr,10,2);
    printf("The number of occurences of 2 are %d\n", result);
    result =  occurrences(arr,10,7);
    printf("The number of occurences of 7 are %d\n", result);
    result =  occurrences(arr,10,10);
    printf("The number of occurences of 10 are %d\n", result);
    
    return 0;
}
