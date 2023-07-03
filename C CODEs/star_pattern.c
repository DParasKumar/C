#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void starpatternreverse(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int rows, choose;
    printf("1 for simple star and 2 for reverse star pattern:\n");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:

        printf("Enter the number of rows you wanna print in an triangle:\n");

        scanf("%d", &rows);

        starpattern(rows);
        break;

    case 2:
        printf("Enter the number of rows you wanna print in an reverse triangle\n");
        scanf("%d", &rows);
        starpatternreverse(rows);
        break;

    default:
        printf("wrong command");
        break;
    }
    return 0;
}