#include<stdio.h>
#include<conio.h>
void func1(int arr[])
{
    printf("array before reversal:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("array after reversal:\n");
    for (int j = 8; j >-1; j--)
    {
        printf("%d",arr[j]);
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    func1(arr);
    return 0;
}
