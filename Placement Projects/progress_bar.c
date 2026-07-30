#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

const int BAR_LENGTH = 100;
const int MAX_TASKS = 15;

typedef struct Task
{
    int id;
    int progress;
    int step;
} Task;

void print_bar(Task task);
void clear_screen(void);

int main(int argc, char const *argv[])
{
    Task task[MAX_TASKS];
    srand(time(NULL));
    for (int i = 0; i < MAX_TASKS; i++)
    {
        task[i].id = i + 1;
        task[i].progress = 0;
        task[i].step = rand() % 5 + 1;
    }

    int tasks_incomplete = 1;
    while (tasks_incomplete)
    {
        tasks_incomplete = 0; 
        clear_screen();
        for (int i = 0; i < MAX_TASKS; i++)
        {
            task[i].progress += task[i].step;
            if (task[i].progress > 100)
            {
                task[i].progress = 100;
            }
            else if (task[i].progress < 100)
            {
                tasks_incomplete = 1;
            }
            print_bar(task[i]);
        }
        printf("\n"); 
        sleep(1);
    }

    return 0;
}

void clear_screen(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void print_bar(Task task)
{
    int bars_to_show = (task.progress * BAR_LENGTH) / 100;
    printf("Task %d: [", task.id);
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
    printf("] %d%%\n", task.progress);
}