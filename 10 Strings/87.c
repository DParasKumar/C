// Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword (like "exit") is entered.
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    const char EXIT[] = "exit";
    char command[20];
    printf("Welcome to our System\n\n");
    while (1)
    {
        printf("Please enter your command:");
        scanf("%s", command);
        if (!strcmp(command,EXIT))
        {
            break;
            /* code */

        }
        
    }
    
    printf("\n Exited successfully");
    
    return 0;
}