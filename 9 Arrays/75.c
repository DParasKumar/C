// create a program to search an element in a 2-D array.
#include <stdio.h>

int search(int arr[][3], int rows, int cols, int element)
{
    int occ = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == element)
            {
                occ++;
            }
        }
    }
    return occ;

} // returns number of occurrences

int main(int argc, char const *argv[])
{
    printf("Welcome to seraching in 2-D Array.\n");
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

    int occ = search(arr, 3, 3, 1);
    printf("\n Searching for 1 found %d occurrences.",occ);

    occ = search(arr, 3, 3, 5);
    printf("\n Searching for 5 found %d occurrences.",occ);

    occ = search(arr, 3, 3, 9);
    printf("\n Searching for 9 found %d occurrences.",occ);

    occ = search(arr, 3, 3, 4);
    printf("\n Searching for 4 found %d occurrences.",occ);
    return 0;
}
