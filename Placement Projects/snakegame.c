#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define WIDTH 40
#define HEIGHT 20
#define MAX_SNAKE (WIDTH * HEIGHT)

int gameOver;
int score;

int x, y;
int fruitX, fruitY;

int tailX[MAX_SNAKE];
int tailY[MAX_SNAKE];

int tailLength;

enum Direction
{
    STOP,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

enum Direction dir;

HANDLE hConsole;


// Move cursor
void gotoxy(short x, short y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(hConsole, pos);
}


// Hide cursor
void hideCursor()
{
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(hConsole, &cursorInfo);

    cursorInfo.bVisible = FALSE;

    SetConsoleCursorInfo(hConsole, &cursorInfo);
}


// Setup game
void setup()
{
    gameOver = 0;
    score = 0;

    dir = RIGHT;

    x = WIDTH / 2;
    y = HEIGHT / 2;

    tailLength = 0;

    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
}


// Check if position is occupied by snake
int isSnake(int posX, int posY)
{
    if (x == posX && y == posY)
        return 1;

    for (int i = 0; i < tailLength; i++)
    {
        if (tailX[i] == posX &&
            tailY[i] == posY)
        {
            return 1;
        }
    }

    return 0;
}


// Generate fruit
void generateFruit()
{
    do
    {
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;

    } while (isSnake(fruitX, fruitY));
}


// Draw game
void draw()
{
    char screen[10000];
    int index = 0;

    // Top border
    for (int i = 0; i < WIDTH + 2; i++)
        screen[index++] = '#';

    screen[index++] = '\n';


    // Game area
    for (int i = 0; i < HEIGHT; i++)
    {
        screen[index++] = '#';

        for (int j = 0; j < WIDTH; j++)
        {
            char character = ' ';

            // Snake head
            if (j == x && i == y)
            {
                character = 'O';
            }

            // Fruit
            else if (j == fruitX && i == fruitY)
            {
                character = '*';
            }

            // Snake body
            else
            {
                for (int k = 0; k < tailLength; k++)
                {
                    if (tailX[k] == j &&
                        tailY[k] == i)
                    {
                        character = 'o';
                        break;
                    }
                }
            }

            screen[index++] = character;
        }

        screen[index++] = '#';
        screen[index++] = '\n';
    }


    // Bottom border
    for (int i = 0; i < WIDTH + 2; i++)
        screen[index++] = '#';

    screen[index++] = '\n';

    // Score
    index += sprintf(
        &screen[index],
        "Score: %d\n",
        score
    );

    index += sprintf(
        &screen[index],
        "Controls: WASD / Arrow Keys | Q = Quit"
    );

    screen[index] = '\0';


    // Move cursor to top-left
    gotoxy(0, 0);

    // Print entire frame at once
    DWORD written;

    WriteConsole(
        hConsole,
        screen,
        index,
        &written,
        NULL
    );
}


// Input
void input()
{
    if (!_kbhit())
        return;

    int key = _getch();

    // Arrow keys
    if (key == 224)
    {
        key = _getch();

        switch (key)
        {
            case 75: // Left
                if (dir != RIGHT)
                    dir = LEFT;
                break;

            case 77: // Right
                if (dir != LEFT)
                    dir = RIGHT;
                break;

            case 72: // Up
                if (dir != DOWN)
                    dir = UP;
                break;

            case 80: // Down
                if (dir != UP)
                    dir = DOWN;
                break;
        }
    }

    // WASD
    else
    {
        switch (key)
        {
            case 'a':
            case 'A':
                if (dir != RIGHT)
                    dir = LEFT;
                break;

            case 'd':
            case 'D':
                if (dir != LEFT)
                    dir = RIGHT;
                break;

            case 'w':
            case 'W':
                if (dir != DOWN)
                    dir = UP;
                break;

            case 's':
            case 'S':
                if (dir != UP)
                    dir = DOWN;
                break;

            case 'q':
            case 'Q':
                gameOver = 1;
                break;
        }
    }
}


// Game logic
void logic()
{
    // Previous head position
    int previousX = x;
    int previousY = y;

    // Move head
    switch (dir)
    {
        case LEFT:
            x--;
            break;

        case RIGHT:
            x++;
            break;

        case UP:
            y--;
            break;

        case DOWN:
            y++;
            break;

        case STOP:
            break;
    }


    // Move tail
    for (int i = 0; i < tailLength; i++)
    {
        int tempX = tailX[i];
        int tempY = tailY[i];

        tailX[i] = previousX;
        tailY[i] = previousY;

        previousX = tempX;
        previousY = tempY;
    }


    // Wall collision
    if (x < 0 ||
        x >= WIDTH ||
        y < 0 ||
        y >= HEIGHT)
    {
        gameOver = 1;
        return;
    }


    // Self collision
    for (int i = 0; i < tailLength; i++)
    {
        if (x == tailX[i] &&
            y == tailY[i])
        {
            gameOver = 1;
            return;
        }
    }


    // Eat fruit
    if (x == fruitX &&
        y == fruitY)
    {
        score += 10;

        if (tailLength < MAX_SNAKE - 1)
            tailLength++;

        generateFruit();
    }
}


// Game over
void gameOverScreen()
{
    gotoxy(0, 0);

    printf("\n\n");
    printf("========================================\n");
    printf("              GAME OVER!\n");
    printf("========================================\n\n");

    printf("              Score: %d\n\n", score);

    printf("       Press R to restart\n");
    printf("       Press Q to quit\n");

    printf("========================================\n");
}


// Main
int main()
{
    // Console handle
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Random seed
    srand((unsigned int)time(NULL));

    hideCursor();

    while (1)
    {
        setup();

        // Initial fruit
        generateFruit();

        // Game loop
        while (!gameOver)
        {
            draw();
            input();
            logic();

            Sleep(100);
        }

        gameOverScreen();

        while (1)
        {
            char key = _getch();

            if (key == 'r' || key == 'R')
                break;

            if (key == 'q' || key == 'Q')
                return 0;
        }
    }

    return 0;
}