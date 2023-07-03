#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    char input, name[20];
    int userscore = 0, computerscore = 0;
    printf("Enter your name : ");
    scanf("%s", &name);
    getchar();
    printf("Rock = 'R'\nPaper = 'P'\nScissor = 'S'\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s turn\t: ", name);
        scanf("%s", &input);
        getchar();

        printf("Computers turn\t: ");
        srand(time(NULL));
        int com = rand() % 3;
        printf("%d\n", com);

        if (input == 'R' && com == 2 || input == 'P' && com == 0 || input == 'S' && com == 1)
        {
            printf("***Congratulation you won***\n\n");
            userscore++;
        }
        else if (input == 'R' && com == 1 || input == 'P' && com == 2 || input == 'S' && com == 0)
        {
            computerscore++;
            printf("\n***You lose***\n\n");
        }
        else if (input == 'R' && com == 0 || input == 'P' && com == 1 || input == 'S' && com == 2)
        {
            printf("Draw!\n\n");
        }
        else
        {
            printf("Invalid!\n\n");
            goto end;
        }
    }

    printf("\nScores :\n%s : %d\nComputer : %d\n\n", name, userscore, computerscore);
    if (userscore > computerscore)
    {
        printf("***Congratulations %s you won!***", name);
    }
    else
    {
        printf("***You Lose try next time!***");
    }
end:
    return 0;
}