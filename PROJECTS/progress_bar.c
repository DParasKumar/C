#include <stdio.h>
int main(int argc, char const *argv[])
{
    const int BAR_LENGTH = 50;

    /* code */
    int id = 3, progress = 40;
    int bars_to_show = progress / 100 * BAR_LENGTH;
    printf("\nTask %d: [", id);
    for (int i = 0; i < BAR_LENGTH; i++)
    {
        if (i < bars_to_show)
        {
            printf("=");
        }
        else
        {
            printf(" ");
        }
    }

    printf("] %d%%", progress);
    return 0;
}
