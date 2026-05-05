// Pass a Car strucute to a function that prints out a description of the car in one complete sentence.

#include<stdio.h>
#include<string.h>


struct Car
{
    char make[25];
    char model[25];
    char color[15];
    int year;
};

typedef struct Car Car;

void print_car(Car *car);

void print_car(Car *car){
    printf("This %s model of car which is of %s colored car was purchased in %d year and is made by %s company", car->model, car->color, car->year, car->make);
}

int main(int argc, char const *argv[])
{
    Car ford = {.make = "ford",.model="Aspire",.year=2016,.color="Red"};
    print_car(&ford);
    return 0;
}
