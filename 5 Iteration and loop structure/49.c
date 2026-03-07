// write a program that continuously reads integers from the user and prints their squars. Use an infinite loop and a break statement to exit when a speacial number(E.G. -1) is entered.
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
