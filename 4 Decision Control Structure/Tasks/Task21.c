// create a program that determines the greatest of the three numbers.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int first, second, third;
    printf("Enter your first number:\n");
    scanf("%d", &first);
    printf("Enter your second number:\n");
    scanf("%d", &second);
    printf("Enter your third number:\n");
    scanf("%d", &third);

    if (first > second && first > third)
    {
        printf("%d is the greatest number.\n", first);

    }
    else if (second > third)
    {
        printf("%d is the greatest number.\n", second);

    }
    else
    {
        printf("%d is the greatest number.\n", third);

    }

    return 0;
}
