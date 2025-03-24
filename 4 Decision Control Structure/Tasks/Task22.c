// create a program that determines if a given year is a leap year(considering conditions like divisible by 4 but not 100, unless also divisible by 400).
/*A leap year is a year that has 366 days instead of the usual 365 days. The extra day, February 29, is added to keep our calendar in sync with the Earth's orbit around the Sun.

Leap Year Rules:
A year is a leap year if it meets one of the following conditions:

Divisible by 4 → If a year is divisible by 4, it is a leap year unless:

Divisible by 100 → If a year is also divisible by 100, it is not a leap year unless:

Divisible by 400 → If a year is divisible by 400, it is a leap year.

Examples:
✅ Leap Years:

2024 (divisible by 4, but not 100)

2000 (divisible by 400)

1600 (divisible by 400)

❌ Not Leap Years:

2023 (not divisible by 4)

1900 (divisible by 100, but not 400)

2100 (divisible by 100, but not 400)
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Please Enter year:\n");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 ))
    {
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    // if (year % 400 == 0)
    // {
    //     printf("%d is a leap year", year);
    // }
    // else if (year % 100 == 0)
    // {
    //     printf("%d is not a leap year", year);
    // }
    // else if (year % 4 == 0)
    // {
    //     printf("%d is a leap year", year);
    // }
    // else
    // {
    //     printf("%d is not a leap year", year);
    // }
    return 0;
}
