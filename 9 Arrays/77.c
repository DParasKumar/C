// Create a program to find of two diagonal elements.
#include <stdio.h>
const int SIZE = 3;
void print_diagonal_sum(int arr[][SIZE])
{
    int sum_left_diagonal = 0;
    int sum_right_diagonal = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum_left_diagonal += arr[i][i];
        sum_right_diagonal += arr[i][SIZE - 1 - i];
    }
    printf("\n The sum of left diagonal is %d", sum_left_diagonal);
    printf("\n The sum of right diagonal is %d", sum_right_diagonal);

    int total_diagonal_sum = sum_left_diagonal + sum_right_diagonal;
    if (SIZE % 2 == 1)
    {
        int index = SIZE /2;
        total_diagonal_sum -= arr[index] [index]; 
    }
    printf("\nThe sum of total diagonal is %d", total_diagonal_sum);
    
}
int main(int argc, char const *argv[])
{
    printf("Welcome to sum of diagonals in 2d array\n");
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
    int arr2[4][4] = {{8, 7, 6, 5}, {1, 2, 3, 4}, {5, 8, 3, 5}, {0, 1, 8, -2}};

    print_diagonal_sum(arr1);
    return 0;
}
