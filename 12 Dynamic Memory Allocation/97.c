// Allocate memory for a struct representing a point with x and y coordinates, set some values, and then properly deallocate the memory using free.

#include <stdio.h>
#include <stdlib.h>

typedef struct Point       
{
    int x;
    int y;
} Point;

void input_point(Point *);
void show_point(Point *);

int main(int argc, char const *argv[])
{
    printf("Welcome to dynamic points\n");

    Point *start = (Point *)malloc(sizeof(Point));
    Point *end   = (Point *)malloc(sizeof(Point));

    if (start == NULL || end == NULL)
    {
        printf("Memory Issues !!\n");  
        return 1;
    }

    printf("\nPlease enter the details for the starting point of your line:");
    input_point(start);
    printf("\nPlease enter the details for the ending point of your line:");
    input_point(end);

    printf("\nNow here are your details:\n");
    show_point(start);
    show_point(end);

    free(start);
    free(end);
    start = NULL;  
    end   = NULL;

    return 0;
}

void input_point(Point *point)
{
    printf("\nEnter x coordinate: ");
    scanf("%d", &point->x);
    printf("Enter y coordinate: ");
    scanf("%d", &point->y);
}

void show_point(Point *point)
{
    printf("Coordinates: (%d, %d)\n", point->x, point->y);
}