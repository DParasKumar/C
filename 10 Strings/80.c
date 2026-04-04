// Write a program to convert a input string to uppercase.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    printf("Please Enter the string you want to change to uppercase:\n");
    char text[100];
    fgets(text, sizeof(text), stdin);
    for (int i = 0; i < text[i] != '\0'; i++)
    {
        text[i] = toupper(text[i]);
    }
    printf("Here is your final output\n %s", text);
    
    return 0;
}
