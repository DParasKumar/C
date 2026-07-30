#include <stdio.h>
void print_bar(int id, int progress);
const int BAR_LENGTH = 100;
int main(int argc, char const *argv[])
{
    print_bar(1,25);
    print_bar(9,100);
    print_bar(4,90);
    print_bar(6,0);

    return 0;
}

void print_bar(int id, int progress)
{
    /* code */
    // int id = 3, progress = 40;
    int bars_to_show = (progress * BAR_LENGTH) / 100;
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
}