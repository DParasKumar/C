#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    char input, name[20];
    int userscore = 0, computerscore = 0;
    printf("ENTER YOUR NAME:");
    scanf("%s", &name);
    getchar();
    printf("Rock = 'r'\n paper = 'p'\n scissor='s'\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s turn\t:", name);
        scanf("%s", &input);
        getchar();

        printf("computer turn\t:");
        srand(time(NULL));
        int com = rand() % 3;
        printf("%d\n", com);

        if (input == 'r' && com == 2 || input == 'p' && com == 0 || input == 's' && com == 1)
        {
            printf("**congratulation you won***\n\n");
            userscore++;
        }
        else if (input == 'r' && com == 1 || input == 'p' && com == 2 || input == 's' && com == 0)
        {
            computerscore++;
            printf("\n***You lose***\n\n");
        }
        else if (input == 'r' && com == 0 || input == 'p' && com == 1 || input == 's' && com == 2)
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
