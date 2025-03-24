// create a program to print the month of the year based on a number (1-12) input by the user.
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int month;
    printf("Enter Your number:\n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("Feburary");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    
    default:
        printf("out of scope");
        break;
    }
    return 0;
}
