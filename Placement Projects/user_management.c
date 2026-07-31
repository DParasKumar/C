#include <stdio.h>

#define MAX_USERS 10

typedef struct
{
    char username[30];
    char password[30];
} User;

User users[MAX_USERS];
int user_count = 0;

void register_user();
void login_user();  //returns the user index
int main(int argc, char const *argv[])
{
    int option;
    while (1)
    {

        printf("\n Welcome to user management");
        printf("\n 1.Register");
        printf("\n 1.Login");
        printf("\n 1.Exit");
        printf("\n Select an option");
        scanf("%d", &option);
        /* code */
    }
    switch (option)
    {
    case 1:
    register_user();
        break;
    case 2:
    int user_index = login_user();
    if (user_index >= 0)
    {
        printf("")  ;          
    }else{
        printf("\n Login failed ! Incorrect username or password.");
    }
    
        break;
    case 3:
        printf("\nExiting program.");
        return 0;
        break;
    default:
        printf("\nInvalid option. Please try again.");
        break;
    }
    return 0;
}

void register_user(){
    printf("Dummmy");
}


void login_user(){
    return -1;
}