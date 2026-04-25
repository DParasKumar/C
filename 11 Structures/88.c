// Create a program where you need to store and process data for a book with attributes like title,author, and price, demonstrating why a structure is mor suitable than separate variables.

#include <stdio.h>
#include<string.h>

void input_book(char Title[], char Author[], float *Price)
{
    printf("Please enter the book Title:\n");
    fgets(Title, 100, stdin);
    Title[strcspn(Title)] = 0;
    printf("Please enter the book Author:\n");
    fgets(Author, 100, stdin);
    Author[strcspn(Author)] = 0;
    printf("Please enter the book Price:\n");
    scanf("%f", Price);
}

void print_book(char Title[], char Author[], float Price)
{
    printf("\n%s is written by %s and is sold for Rs%.2f", Title, Author, Price);
}
int main(int argc, char const *argv[])
{ /* code */
    printf("Welcome to the Book Store\n");

    char Title[3][100];
    char Author[3][100];
    float Price[3];

    for (int i = 0; i < 3; i++)
    {

        printf("Please enter the book Title:\n");
        fgets(Title[i], 100, stdin);
        printf("Please enter the book Author:\n");
        fgets(Author[i], 100, stdin);
        printf("Please enter the book Price:\n");
        scanf("%f", &Price[i]);
        while(getchar() != '\n');
    }
    for (int i = 0; i < 3; i++)
    {
        input_book(Title[i], Author[i], &Price[i]);
    }
    
    printf("\n here are the details of all the books:");
    for (int i = 0; i < 3; i++)
    {
        print_book(Title[i], Author[i], Price[i]);
    }

    return 0;
}
