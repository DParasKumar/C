// Write a fucntion that uses pointer arithmetic to cop an array of char into another.

#include<stdio.h>

void copy_arr(char *arr, int size, char new_arr[]);
void copy_arr(char *arr, int size, char new_arr[]){
    for (int i = 0; i < size; i++)
    {

        *(new_arr + i) = *(arr + i);
        // *new_arr = *arr;
        // new_arr++;
        // arr++;
        
    }
    
}

int main(int argc, char const *argv[])
{

    char arr[] = { 'P','K',' ','C','o','d','i','n','g'};    /* code */
    char new_arr[9];

    printf("Welcome to copying array using pointer arithmetic \n");
    printf("Original char array:\n");
    print_arr(arr,9);
    printf("\nCopied char array:\n");
    print_arr(arr, 9);
    return 0;
}

void print_arr(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
}