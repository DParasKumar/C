#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 3

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
void print_board(char board[BOARD_SIZE][BOARD_SIZE]);
int check_win(char board[BOARD_SIZE][BOARD_SIZE], char player);
int check_draw(char board[BOARD_SIZE][BOARD_SIZE]);
void play_game();
void get_player_move(char board[BOARD_SIZE][BOARD_SIZE]);
void computer_move_random(char board[BOARD_SIZE][BOARD_SIZE]);
void computer_move_best(char board[BOARD_SIZE][BOARD_SIZE]);
int minimax(char board[BOARD_SIZE][BOARD_SIZE], int depth, int is_maximizing);
void reset_board(char board[BOARD_SIZE][BOARD_SIZE]);

int check_win(char board[BOARD_SIZE][BOARD_SIZE], char player)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return 1;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
        {
            return 1;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[2][0] == player && board[1][1] == player && board[0][2] == player))
    {
        return 1;
    }
    return 0;
}

int check_draw(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (size_t i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

void print_board(char board[BOARD_SIZE][BOARD_SIZE])
{
    clear_screen();
    printf("\nScore - Player X: %d, Computer: %d, Draws: %d", score.player, score.computer, score.draw);
    printf("\n Tic-Tac-Toe\n\n");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < BOARD_SIZE - 1)
        {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

void reset_board(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
        for (int j = 0; j < BOARD_SIZE; j++)
            board[i][j] = ' ';
}


void get_player_move(char board[BOARD_SIZE][BOARD_SIZE])
{
    int choice, row, col;

    while (1)
    {
        printf("Enter your move (1-9): ");
        if (scanf("%d", &choice) != 1)
        {
            /* clear bad input from stdin */
            while (getchar() != '\n')
                ;
            printf("\nInvalid input. Try again.\n");
            continue;
        }

        if (choice < 1 || choice > 9)
        {
            printf("\nInvalid choice. Enter a number between 1 and 9.\n");
            continue;
        }

        row = (choice - 1) / BOARD_SIZE;
        col = (choice - 1) % BOARD_SIZE;

        if (board[row][col] != ' ')
        {
            printf("\nThat spot is already taken. Try again.\n");
            continue;
        }

        board[row][col] = 'X';
        break;
    }
}

void computer_move_random(char board[BOARD_SIZE][BOARD_SIZE])
{
    int row, col;
    do
    {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while (board[row][col] != ' ');

    board[row][col] = 'O';
}


int minimax(char board[BOARD_SIZE][BOARD_SIZE], int depth, int is_maximizing)
{
    if (check_win(board, 'O')) return 10 - depth;
    if (check_win(board, 'X')) return depth - 10;
    if (check_draw(board)) return 0;

    if (is_maximizing)
    {
        int best = -1000;
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                if (board[i][j] == ' ')
                {
                    board[i][j] = 'O';
                    int val = minimax(board, depth + 1, 0);
                    board[i][j] = ' ';
                    if (val > best) best = val;
                }
            }
        }
        return best;
    }
    else
    {
        int best = 1000;
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                if (board[i][j] == ' ')
                {
                    board[i][j] = 'X';
                    int val = minimax(board, depth + 1, 1);
                    board[i][j] = ' ';
                    if (val < best) best = val;
                }
            }
        }
        return best;
    }
}

void computer_move_best(char board[BOARD_SIZE][BOARD_SIZE])
{
    int best_val = -1000;
    int best_row = -1, best_col = -1;

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j] == ' ')
            {
                board[i][j] = 'O';
                int move_val = minimax(board, 0, 0);
                board[i][j] = ' ';

                if (move_val > best_val)
                {
                    best_val = move_val;
                    best_row = i;
                    best_col = j;
                }
            }
        }
    }

    board[best_row][best_col] = 'O';
}

void play_game()
{
    char board[BOARD_SIZE][BOARD_SIZE];
    char play_again = 'y';

    srand((unsigned int)time(NULL));

    while (play_again == 'y' || play_again == 'Y')
    {
        reset_board(board);
        int game_over = 0;

        while (!game_over)
        {
            print_board(board);
            get_player_move(board);

            if (check_win(board, 'X'))
            {
                print_board(board);
                printf("You win!\n");
                score.player++;
                game_over = 1;
                break;
            }
            if (check_draw(board))
            {
                print_board(board);
                printf("It's a draw!\n");
                score.draw++;
                game_over = 1;
                break;
            }

            if (difficulty == 1)
                computer_move_random(board);
            else
                computer_move_best(board);

            if (check_win(board, 'O'))
            {
                print_board(board);
                printf("Computer wins!\n");
                score.computer++;
                game_over = 1;
                break;
            }
            if (check_draw(board))
            {
                print_board(board);
                printf("It's a draw!\n");
                score.draw++;
                game_over = 1;
                break;
            }
        }

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &play_again);
    }

    printf("\nThanks for playing!\n");
}

int main(int argc, char const *argv[])
{
    input_difficulty();
    play_game();
    return 0;
}

void input_difficulty()
{
    while (1)
    {
        printf("tic tac toe.");
        printf("\n Select difficulty level:");
        printf("\n 1. Human (Standard)");
        printf("\n 2. God (Impossible to win.)");
        printf("\n Enter your choice: ");
        scanf("%d", &difficulty);

        if (difficulty != 1 && difficulty != 2)
        {
            printf("\n\n Incorrect choice enter (1 or 2)");
        }
        else
        {
            break;
        }
    };
}

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}