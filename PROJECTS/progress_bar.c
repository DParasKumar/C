#include <stdio.h>
#include <unistd.h>
const int BAR_LENGTH = 100;
const int MAX_TASKS = 5;

typedef struct Task
{
    int id;
    int progress;
    int step;
    /* data */
};
void print_bar(Task task);
int main(int argc, char const *argv[])
{
    Task task[MAX_TASKS];
    for (int i = 0; i < MAX_TASKS; i++)
    {
        task[i].id = i + 1;
        task[i].progress = 0;
        task[i].step = 2;
    }

    int tasks_incomplete = 1;
    while (tasks_incomplete)
    {
        for (int i = 0; i < MAX_TASKS; i++){
            tasks[i].progress += tasks[i].step;
            if (tasks[i].progress > 100)
            {
                tasks[i].progress = 100;
            }else if (tasks[i].progress < 100)
            {
                tasks_incomplete = 1;
            }
            print_bar (tasks[i]);
            
        }
        sleep(1);
    }

    return 0;
}

void print_bar(Task task)
{
    /* code */
    // int id = 3, progress = 40;
    int bars_to_show = (task.progress * BAR_LENGTH) / 100;
    printf("\nTask %d: [", task.id);
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

    printf("] %d%%", task.progress);
}