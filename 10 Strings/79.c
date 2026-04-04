// use printf with formate specifiers to formate and print a date string (day, month, year)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char day[10];
    char month[15];
    int year;

    printf("welcome to formatting date \n\n");

    printf("Please Enter the current day:");
    scanf("%s", day);

    printf("Please Enter the current month:");
    scanf("%s", month);

    printf("Please Enter the current year:");
    scanf("%d", &year);

    printf("\n The current date is: %s:%s:%04d", day , month, year);
    return 0;
}
