// Use a 2-D character array to store and display a tic-tac-toe board.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char board[3][3] = {{'X', 'O', 'O'}, {'O', 'X', 'O'}, {'X', 'O', 'X'}};
    printf("Welcome to showing tic-tac-toe board\n\n");
    printf("\n%c|%c|%c", board[0][1], board[0][2], board[0][3]);
    printf("\n-----");
    printf("\n%c|%c|%c", board[1][0], board[1][2], board[1][3]);
    printf("\n-----");
    printf("\n%c|%c|%c", board[2][0], board[2][2], board[2][3]);
    
    return 0;
}
