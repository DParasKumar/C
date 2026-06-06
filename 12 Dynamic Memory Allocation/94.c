// create a program that dynamically allocates memory for a car strcture and then free it at the end of the program.
#include <stdio.h>
#include <stdlib.h>

struct Car
{
    char make[25];
    char model[25];
    int year;
    char color[15];
};
typedef struct Car Car;

void print_car(Car *car)
{
    printf("\n  Model : %s\n", car->model);
    printf("  Make  : %s\n", car->make);
    printf("  Color : %s\n", car->color);
    printf("  Year  : %d\n", car->year);
}

int main(int argc, char const *argv[])
{
    printf("Welcome to our dynamic island.\n");

    Car *my_car = malloc(sizeof(Car));  // ✅ No (int) cast on sizeof
    if (my_car == NULL)                 // ✅ Always check malloc result
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Please enter your car model: ");
    scanf("%24s", my_car->model);       // ✅ Width limit prevents overflow

    printf("Please enter your car company: ");
    scanf("%24s", my_car->make);

    printf("Please enter your car color: ");
    scanf("%14s", my_car->color);

    printf("Please enter your car year: ");
    scanf("%d", &my_car->year);         // ✅ Correct specifier + & for int

    printf("\n\nHere are your car details:");
    print_car(my_car);

    free(my_car);
    my_car = NULL;

    return 0;                           // ✅ Explicit return
}