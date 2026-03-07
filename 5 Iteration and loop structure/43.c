// create a program that prompts the user to enter a positive number. Use a do-while loop to keep asking for the number until the user enters a valid positive number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Welcome to persistent number checker:\n");
    do
    {
        printf("Please enter positive number:\n");
        scanf("%d", &num);
    } while (num <= 0);
    
    printf("You have sucessfully entered a positive number");
 
    return 0;
}
