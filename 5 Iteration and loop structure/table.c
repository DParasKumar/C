#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Welcom to printing table of a number\n");
    printf("This program will print the table of a number from 1 to 10\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
        
    }
    

    return 0;
}
