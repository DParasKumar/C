#include <stdio.h>

void print_marks(int marks[], int no_of_students);
void print_marks(int student_marks[], int student_count)
{
    for (int i = 0; i < student_count; i++)
    {
        printf("\nthe marks of student %d are: %d", i + 1, student_marks[i]);
    }
}

int main(int argc, char const *argv[])
{
    int marks[10];
    int no_of_students = 10;

    for (int i = 0; i < no_of_students; i++)
    {
        printf("Please enter marks for student %d:\n", i + 1);
        scanf("%d", &marks[i]);
    }
    print_marks(marks, no_of_students);

    return 0;
}
