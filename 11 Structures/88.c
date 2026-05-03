// Create a program where you need to store and process data for a book with attribures like title, author, and price, demonstrating why a structure is more suitable than separate variables.

#include <stdio.h>
#include <string.h>

void inputbook(char title[], char author[], float *price)
{
    printf("Please Enter the book title: ");
    fgets(title, 100, stdin);

    printf("Please Enter the book author: ");
    fgets(author, 100, stdin);

    printf("Please Enter the book price in rs: ");
    scanf("%f", price);
    while(getchar() != '\n');
}

void printbook(char titles[], char author[], float price)
{
    printf("\n%s is written by %s and is sold for Rs%.2f", titles, author, price);
}
int main(int argc, char const *argv[])
{
    printf("Welcome to the Book Store\n");
    char titles[3][100];
    char authors[3][100];
    float prices[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Please Enter the book title: ");
        fgets(titles[i], 100, stdin);

        printf("Please Enter the book author: ");
        fgets(authors[i], 100, stdin);

        printf("Please Enter the book price in rs: ");
        scanf("%f", &prices[i]);
    }

    printf("\nHere are the details of all the books:\n");
    for (int i = 0; i < 3; i++)
    {
        printbook(titles[i], authors[i], prices[i]);
    }

    return 0;
}
