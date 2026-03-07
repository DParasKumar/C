// Call a function print_date that prints the current date. Define the function without parameters.

#include<stdio.h>
#include<time.h>

void print_date();

void print_date(){
 time_t current_time;
 time(&current_time);

 char* date_string = asctime(localtime(&current_time));
 printf("Current Date is : %s", date_string);

}

int main(int argc, char const *argv[])
{
    print_date();

    return 0;
}
