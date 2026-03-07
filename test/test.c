#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("welcome to the world of squars");
    while (1)
    {
        printf("\n please enter the number:");
        scanf("%d", &num);

        if (num == -1)
        {
            break;

        }
        
        printf("The square of number is %d", num * num);
    }

    printf("Invalid Input");
    
    return 0;
}
