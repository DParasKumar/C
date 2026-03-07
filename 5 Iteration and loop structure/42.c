// create a program that prints star patterns:
#include <stdio.h>

int main() {
    int rows;
    printf("Welcome to the pattern program:\n");
    printf("Please enter the number of rows:\n");
    scanf("%d", &rows);

    // Right half pyramid
    printf("Here is right half pyramid:");
    for (int i = 1; i <= rows; i++) {
        printf("\n");
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
    }

    // Reverse right half pyramid
    printf("\n\nHere is reverse right half pyramid:");
    for (int i = 0; i < rows; i++) {
        printf("\n");
        for (int j = 0; j < rows - i; j++) {
            printf("* ");
        }
    }

    // Left half pyramid (FIXED)
    printf("\n\nHere is left half pyramid:");
    for (int i = 1; i <= rows; i++) {
        printf("\n");

        
        for (int k = 0; k < rows - i; k++) {
            printf("  ");
        }

       
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
    }

    return 0;
}
