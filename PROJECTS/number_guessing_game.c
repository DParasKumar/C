#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("welcome to the number guessing game !");
    // generating between 100
    random = rand() % 100 + 1;
    // For testing
    // printf("number genrated is : %d", random);

    do
    {
        printf("\nPlease enter your guess between 1 - 100:");
        scanf("%d", &guess);

        no_of_guess++;

        if (guess < random)
        {
            printf("\nguess larger number");
        }
        else if (guess > random)
        {
            printf("\nGuess lesser number");
        }
        else
        {
            printf("\nYou got it right ! You got it after %d of attemps", no_of_guess);
        }

    } while (guess != random);
    printf("\n Have a greate day !");
    printf("\n Developed by : D PARAS KUMAR");

        return 0;
}
