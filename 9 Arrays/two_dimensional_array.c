#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[2][3];

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Enter the marks for student: %d for subject: %d \n", row+1,col+1);
            scanf("%d", &marks[row][col]);
        }
        
    }
    


    return 0;
}
