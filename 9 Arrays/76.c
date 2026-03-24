// create a program to do sum and average of all elements in a 2-d array.

#include <stdio.h>

int sum(int arr[][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }

    return sum;

} // returns number of occurrences

int main(int argc, char const *argv[])
{
    printf("Welcome to Sum and Average in 2-D Array.\n");
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

    int addition = sum(arr, 3, 3);
    float average = addition / 9.0;

    printf("\n The Sum: %d and Average is %.2f", addition,average);

    return 0;
}
