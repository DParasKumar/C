#include <stdio.h>
#include <string.h>

#define MAX_USERS 10
#define CREDENTIAL_LENGTH = 30

typedef struct
{
    char username[30];
    char password[30];
} User;

User users[MAX_USERS];
int user_count = 0;

void register_user();
int login_user(); // returns the user index, or -1 if login fails

int main(int argc, char const *argv[])
{
    int option;

    while (1)
    {
        printf("\n Welcome to user management");
        printf("\n 1. Register");
        printf("\n 2. Login");
        printf("\n 3. Exit");
        printf("\n Select an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            register_user();
            break;
        case 2:
        {
            int user_index = login_user();
            if (user_index >= 0)
            {
                printf("\n Login successful! Welcome, %s", users[user_index].username);
            }
            else
            {
                printf("\n Login failed! Incorrect username or password.");
            }
            break;
        }
        case 3:
            printf("\nExiting program.");
            return 0;
        default:
            printf("\nInvalid option. Please try again.");
            break;
        }
    }

    return 0;
}

void register_user()
{
    if (user_count >= MAX_USERS)
    {
        printf("\n User limit reached. Cannot register more users.");
        return;
    }

    printf("\n Enter username: ");
    scanf("%29s", users[user_count].username);
    printf("\n Enter password: ");
    scanf("%29s", users[user_count].password);

    user_count++;
    printf("\n Registration successful!");
}

int login_user()
{
    char username[30];
    char password[30];

    printf("\n Enter username: ");
    scanf("%29s", username);
    printf("\n Enter password: ");
    scanf("%29s", password);

    for (int i = 0; i < user_count; i++)
    {
        if (strcmp(users[i].username, username) == 0 &&
            strcmp(users[i].password, password) == 0)
        {
            return i;
        }
    } 

    return -1;
}