//create a program to find the least common multiple (lcm) of two numbers..
#include <stdio.h>
int main(int argc, char const *argv[])

{
    int first , second;
    printf("Welcome to LCM finder\n");
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    int min = first >second ? first : second ;
    int max = first * second;

    for (int i = min; i <= max; i ++) {
        if (i % first == 0 && i % second == 0) 
        {
            printf("The least common multiple of %d and %d is: %d\n", first, second, i);
            break;
        }
    }
    return 0;
}
