#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Please enter marks for student %d:\n", i + 1);
        scanf("%d", &marks[i]);
    }
    



    for (int i = 0; i < 5; i++)
    {
        printf("\nthe marks of student %d are: %d",i+1, marks[i]);
    }
    
    return 0;
}
