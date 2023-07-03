#include<stdio.h>
int main()
{
    // int a=79;
    // int *ptra = &a;
    // int *ptr2 = NULL;
    // printf("the address of a pointer to a is %p\n", &ptra);
    // printf("the address of a is %p\n", *&a);
    // printf("address of a is %d\n", ptra);
    // printf("the address of a is %p\n", ptra);
    // printf("the value of a is %d\n", *ptra);
    // printf("the value of a is %d\n", a);
    int arr[7] = {1,2,3,4,5,6,7};
    int i;
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    printf("value at position 2 of array is %d\n", arr[2]);
    printf("address at position 2 of array is %d\n", &arr[2]);
    printf("itratting the value of 2 position array is %d\n", arr[2]+1);
    printf("itratting the address of 2 position array is %d\n", &arr[2]+1);
    return 0;
}