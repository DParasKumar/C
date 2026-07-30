#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void fill_time(char *, int);
void fill_date(char *);
int input_format();
void screen_clear();

int main()
{
    char time[100], date[100];
    int format = input_format();

    while (1)
    {

        fill_time(time, format);
        fill_date(date);
        screen_clear();
        printf("Current Time: %s\n", time);
        printf("Date: %s\n", date);
        sleep(1);
    }
    return 0;
}
void screen_clear(){
    #ifdef _WIN32
        system("cls");//for windows
    #else
        system("clear"); //for mac
    #endif
}

void fill_date(char *buffer)
{
    time_t raw_time;
    struct tm *current_time;
    time(&raw_time);
    current_time = localtime(&raw_time);
    strftime(buffer, 100, "%A %B %d %Y", current_time);
}

int input_format()
{
    int format;
    printf("\n Choose the time format:");
    printf("\n1. 24 Hour format");
    printf("\n2. 12 Hour format (default)");
    printf("\n Make a choice(1/2)");
    scanf("%d", &format);
    return format;
}
void fill_time(char *buffer, int format)
{
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    if (format == 1)
    {
        strftime(buffer, 100, "%H:%M:%S", current_time);
        /* code */
    }
    else
    {
        strftime(buffer, 100, "%I:%M:%S %p", current_time);
    }
}