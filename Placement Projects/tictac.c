#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int player;
    int computer;
    int draw;
} Score;

int difficulty;
Score score = {.player = 0, .computer = 0, .draw = 0};

void input_difficulty();
void clear_screen();
void print_board();

void print_board()
{
    clear_screen();
    printf("\nScore - Player X: %d, Computer: %d, Draws: %d", score.player, score.computer, score.draw);
}

int main(int argc, char const *argv[])
{
    input_difficulty();
    print_board();
}

void input_difficulty()
{
    while (1)
    {

        printf("tic tac toe.");
        printf("\n Select difficulty level:");
        printf("\n 1. Human (Standard)");
        printf("\n 2. God (Impossible to win.)");
        printf("\n Enter your choice:");
        scanf("%d", &difficulty);

        if (difficulty != 1 && difficulty != 2)

        {
            printf("\n\n Incorrect choice enter (1 or 2)");
            /* code */
        }
        else
        {
            break;
        }
    };
}
void clear_screen()
{
#ifdef _Win32
    system("cls");
#else
    system("clear");
#endif
}
