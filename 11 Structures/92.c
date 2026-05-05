// Write a function that accepts a pointer to a student stucture with fields for id, name, year, gpa and modifies its grades.

#include <stdio.h>

struct Student
{
    char id[10];
    char name[50];
    char year[10];
    char grade;
};

typedef struct Student Student;
void increase_grade(Student *);
void decrease_grade(Student *);
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

void increase_grade(Student *stu ){
    stu-> grade--;
}