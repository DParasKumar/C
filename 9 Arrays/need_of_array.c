#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks1,marks2,marks3,marks4,marks5;

    printf("Please enter marks for student 1:\n");
    scanf("%d", &marks1);
    printf("Please enter marks for student 2:\n");
    scanf("%d", &marks2);
    printf("Please enter marks for student 3:\n");
    scanf("%d", &marks3);
    printf("Please enter marks for student 4:\n");
    scanf("%d", &marks4);
    printf("Please enter marks for student 5:\n");
    scanf("%d", &marks5);

    printf("\nMarks of student 1 are : %d", marks1);
    printf("\nMarks of student 2 are : %d", marks2);
    printf("\nMarks of student 3 are : %d", marks3);
    printf("\nMarks of student 4 are : %d", marks4);
    printf("\nMarks of student 5 are : %d", marks5);
    return 0;
}
