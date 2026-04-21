// Create a program using do-while to find password checker until a valid password is entered.
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    const char STORED_PASSWORD[] = "Pa$$word";
    char password[20];
    printf("Welcome to Secure System\n\n");
    do
    {
        printf("Please enter correct password: ");
        scanf("%s", password);
    } while (strcmp(password, STORED_PASSWORD) != 0);
    printf("Access Granted");
    
    return 0;
}
