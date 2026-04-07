// Write a function that takes a string and reverses it in place.
#include<stdio.h>
#include<string.h>


void reverse_string(char str[]);

int main(int argc, char const *argv[])
{
    
    char text [100];
    printf("Welcome to reversing a string\n");
    printf("Please enter your text:");
    fgets(text, sizeof(text), stdin);

    puts("Original string is:");
    puts(text);
    reverse_string(text);
    puts("text after reversal is:");
    puts(text);
    return 0;
}
void reverse_string(char str[]){

    int length = strlen(str);
    for (int i = 0; i < length/2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
        /* code */
    }
    
}
