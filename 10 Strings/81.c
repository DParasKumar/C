// Create a simple text based user login system that compares a stored password string using strcmp.
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    const char STORED_PASSWORD[] = "secret";
    char password[100];
    printf("Welcome to login system\n\n");
    printf("Please enter your password:");
    scanf("%s", password);
    // fgets(password, sizeof(password), stdin);
    
    if (strcmp(password, STORED_PASSWORD) == 0){
        puts("Access Granted to the system.");
    }else{
        puts("Access Denied to the system");
    };
    return 0;
}
