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
void print_student(Student *);
int main(int argc, char const *argv[])
{
    Student stu1 = {.id = "CS001", .name = "Ravi", .year = "First", .grade = 'B'};
    Student stu2 = {.id = "CS002", .name = "Ram", .year = "Second", .grade = 'A'};
    Student stu3 = {.id = "CS003", .name = "Sameer", .year = "Third", .grade = 'F'};


    printf("Welcome to our College\n");
    printf("Here are the student details:\n");
    print_student(&stu1);
    print_student(&stu2);
    print_student(&stu3);

    decrease_grade(&stu1);
    increase_grade(&stu3);

    printf("\nAfter Changes:\n");
    print_student(&stu1);
    print_student(&stu2);
    print_student(&stu3);
    return 0;
}

void print_student(Student *stu){
    printf("\nThe student with %s name has id: %s and studies in %s year has achieved %c grade", stu->name, stu->id,stu->year,stu->grade);
}
void increase_grade(Student *stu)
{
    stu->grade--;
}

void decrease_grade(Student *stu)
{
    stu->grade++;
}