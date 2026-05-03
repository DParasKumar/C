// Create a program where you need to store and process data for a book with attribures like title, author, and price, demonstrating why a structure is more suitable than separate variables.

#include <stdio.h>
#include <string.h>


typedef struct {
    char title[100];
    char author[100];
    float price;
} Book;


void inputBook(Book *b) {
    printf("Enter book title: ");
    fgets(b->title, 100, stdin);
    b->title[strcspn(b->title, "\n")] = 0;  

    printf("Enter book author: ");
    fgets(b->author, 100, stdin);
    b->author[strcspn(b->author, "\n")] = 0;

    printf("Enter price (Rs): ");
    scanf("%f", &b->price);
    while (getchar() != '\n'); 
}

// ✅ Takes ONE Book instead of 3 separate values
void printBook(const Book *b) {
    printf("\n\"%s\" by %s — Rs%.2f\n", b->title, b->author, b->price);
}

int main() {
    printf("=== Welcome to the Book Store ===\n\n");

    Book library[3];  

    for (int i = 0; i < 3; i++) {
        printf("--- Book %d ---\n", i + 1);
        inputBook(&library[i]);
    }

    printf("\n--- All Books ---");
    for (int i = 0; i < 3; i++) {
        printBook(&library[i]);
    }

    return 0;
}