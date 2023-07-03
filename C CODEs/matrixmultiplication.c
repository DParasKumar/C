#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter Your First Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" Enter the %d %d element of first matrix:\n", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Your Second Matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d %d element of matrix:\n",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    // display both the matrix
    printf("Matrix number 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix number 2:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
    printf("---------------printing the result:---------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        // calculating the result took here help from harry sir.
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][j] * b[i][j];

            }
            result[i][j]=sum;
            sum =0;
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",result[i][j]);
        }
        
    printf("\n");
    }
    
    
    return 0;
}
