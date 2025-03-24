// Create a program to based on student's score, categorize as "high","moderate","low" using the ternary operator(example: high for score>80< moderate for 50-80, low for <50).

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Please Enter your marks:\n");
    scanf("%d", &marks);

    printf("Your marks are in this category:");


    // a clean representation of using ternary operator in nested form.
    marks > 80 ? printf("High")
               : (marks >= 50 ? printf("Moderate")
                              : printf("Low"));

    return 0;
}
