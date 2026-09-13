#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUEST_LEN 300
#define MAX_OPTION_LEN 300

typedef struct
{
    char text[MAX_QUEST_LEN];
    char options[4][MAX_OPTION_LEN];
    char correct_option;
    int timeout;
    int prize_money;
} Question;

int read_questions(const char *file_name, Question **questions);
void print_formatted_question(Question question, int q_num);
void strip_newline(char *str);
char get_player_answer(void);
void play_game(Question *questions, int no_of_questions);

int main(void)
{
    Question *questions = NULL;
    int no_of_questions = read_questions("questions.txt", &questions);

    if (no_of_questions <= 0)
    {
        printf("No questions found. Exiting.\n");
        return 0;
    }

    play_game(questions, no_of_questions);

    free(questions);
    return 0;
}


void strip_newline(char *str)
{
    size_t len = strlen(str);
    while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r'))
    {
        str[len - 1] = '\0';
        len--;
    }
}

void print_formatted_question(Question question, int q_num)
{
    const char labels[4] = {'A', 'B', 'C', 'D'};

    printf("\n===============================================\n");
    printf(" Question %d   (Prize: Rs. %d | Time limit: %d sec)\n",
           q_num, question.prize_money, question.timeout);
    printf("===============================================\n");
    printf("%s\n\n", question.text);

    for (int i = 0; i < 4; i++)
    {
        printf("  %c) %s\n", labels[i], question.options[i]);
    }
}


char get_player_answer(void)
{
    char buffer[16];

    printf("\nYour answer (A/B/C/D), or Q to quit: ");
    fflush(stdout);

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return 'Q';
    }
    strip_newline(buffer);

    if (buffer[0] == '\0')
    {
        return '\0'; 
    }

    return (char)toupper((unsigned char)buffer[0]);
}

void play_game(Question *questions, int no_of_questions)
{
    int total_prize = 0;

    printf("*************************************************\n");
    printf("*       WELCOME TO KAUN BANEGA CROREPATI!        *\n");
    printf("*************************************************\n");

    for (int i = 0; i < no_of_questions; i++)
    {
        print_formatted_question(questions[i], i + 1);

        char answer = get_player_answer();
        while (answer != 'Q' && answer != 'A' && answer != 'B' &&
               answer != 'C' && answer != 'D')
        {
            printf("Please enter A, B, C, D or Q.\n");
            answer = get_player_answer();
        }

        if (answer == 'Q')
        {
            printf("\nYou walked away with Rs. %d! Thanks for playing.\n", total_prize);
            return;
        }

        char correct = (char)toupper((unsigned char)questions[i].correct_option);

        if (answer == correct)
        {
            total_prize = questions[i].prize_money;
            printf("\nCorrect! Your total prize money is now Rs. %d\n", total_prize);
        }
        else
        {
            printf("\nWrong answer! The correct answer was %c.\n", correct);
            printf("Game over. You leave with Rs. %d.\n", total_prize);
            return;
        }
    }

    printf("\nCongratulations! You answered every question and won Rs. %d!\n", total_prize);
}

int read_questions(const char *file_name, Question **questions)
{
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("\nUnable to open the questions bank: %s\n", file_name);
        exit(1);
    }

    char str[MAX_QUEST_LEN];
    int no_of_lines = 0;
    while (fgets(str, MAX_QUEST_LEN, file))
    {
        no_of_lines++;
    }

    int no_of_questions = no_of_lines / 8;
    if (no_of_questions <= 0)
    {
        fclose(file);
        return 0;
    }

    *questions = (Question *)malloc(no_of_questions * sizeof(Question));
    if (*questions == NULL)
    {
        printf("\nMemory allocation failed.\n");
        fclose(file);
        exit(1);
    }

    rewind(file);
    for (int i = 0; i < no_of_questions; i++)
    {
        fgets((*questions)[i].text, MAX_QUEST_LEN, file);
        strip_newline((*questions)[i].text);

        for (int j = 0; j < 4; j++)
        {
            fgets((*questions)[i].options[j], MAX_OPTION_LEN, file);
            strip_newline((*questions)[i].options[j]);
        }

        char option[10];
        fgets(option, sizeof(option), file);
        strip_newline(option);
        (*questions)[i].correct_option = (char)toupper((unsigned char)option[0]);

        char timeout_buf[10];
        fgets(timeout_buf, sizeof(timeout_buf), file);
        (*questions)[i].timeout = atoi(timeout_buf);

        char prize_buf[10];
        fgets(prize_buf, sizeof(prize_buf), file);
        (*questions)[i].prize_money = atoi(prize_buf);
    }

    fclose(file);
    return no_of_questions;
}
