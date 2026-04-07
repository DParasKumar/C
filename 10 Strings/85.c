// Create a program that checks if a given string is a palindrome (The same forwards and backwards) and outputs the results.
#include<stdio.h>
#include<string.h>

int is_palindrome(char arr[]){
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++)
    {
        if (arr[i] != arr[len -1-i])
        {
            return 0;
        }
        
    }
    return 1;
    

}
int main(int argc, char const *argv[])
{
    char text[20];
    printf("Welcome to palindrome string checker \n");
    printf("Now enter your string:");
    scanf("%s",text);

    if (is_palindrome(text))
    {
        puts("Your input is palindrome");
    }else{
        puts("Your input is not palindrome");
    }
    
    return 0;
}
