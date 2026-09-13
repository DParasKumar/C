#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEST_LEN 300
#define MAX_OPETION_LEN 300

typedef struct
{
    char text[MAX_QUEST_LEN];
    char options[4][MAX_OPETION_LEN];
    char correct_option;
    int timeout;
    int prize_money;
} Question;

int main(int argc, char const *argv[])
{
    Question **questions;
    read_questions("questions.txt", questions);
    /* code */
    return 0;
}

void read_questions(char *file_name, Question **questions)
{
    FILE *FILE = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("\n Unable to open the questions banks.");
        exit(0);
    }

    char str[MAX_QUEST_LEN];
    int no_of_lines = 0;
    while (fgets(str, MAX_QUEST_LEN, file))
    {
        no_of_lines++;
    }

    int no_of_questions = no_of_lines / 8;
    questions = malloc(no_of_questions * sizeof(Question));

    rewind(file);
    for (int i = 0; i < no_of_questions; i++)
    {
        fgets(questions[i]->text, MAX_QUEST_LEN, file);
        for (int j = 0; j < 4; j++)
        {
            fgets(questions[i]->options[j], MAX_QUEST_LEN, file);
        }
        
        char option[10];
        fgets(option, 10, file);
        questions[i]->correct_option = option[0];

        char timeout[10];
        fgets(timeout, 10, file);
        questions[i]->timeout = atoi(timeout);

        char prize_money[10];
        fgets(prize_money, 10, file);
        questions[i]->timeout = atoi(prize_money);

        
    }
    fclose(file);
    
}
