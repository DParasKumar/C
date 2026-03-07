// Declare a pointer to a char and use it to read and print a character entered by the user.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char character;
    char *ptr = &character;
    printf("Welcome to showcasing character pointers.\n");
    printf("Please enter the value: ");
    scanf("%c", ptr);
    printf("\nThe value of character is : %c",*ptr);
    printf("\nThe value of character is : %c",character );
    return 0;
}
