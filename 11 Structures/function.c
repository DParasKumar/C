#include <stdio.h>

struct student
{
    int rollno;
    char name[10];
    float marks;
};

void printStudent_frompointer(struct student *stu);
void printStudent(struct student stu);
int main(int argc, char const *argv[])
{
    int a = 5;
    int *ptr = &a;

    struct student student = {1, "Ram", 45.5};
    struct student *stu_ptr = &student;

    printStudent(student);
    printStudent_frompointer(stu_ptr);

    return 0;
}
void printStudent_frompointer(struct student *stu)
{
    printf("\nRollNo: %d, Name:%s, Marks: %.2f", stu->rollno, stu->name, stu->marks);
}

void printStudent(struct student stu)
{
    printf("RollNo: %d, Name:%s, Marks: %.2f", stu.rollno, stu.name, stu.marks);
}
