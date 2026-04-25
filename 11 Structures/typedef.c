#include <stdio.h>
// struct student
// {
//     int rollno;
//     char name[10];
//     float marks;
// };

typedef struct Student
{
    int rollno;
    char name[10];
    float marks;

} Student;

int main(int argc, char const *argv[])
{
    typedef int paras;
    paras i = 5;


    struct Student Shyam = {2,"Shyam",70};
    // struct student students = {1, "Ram", 45.5};

    // for (int i = 0; i < 5; i++)
    // {
    //    printf("\nStudent Name: %s, Roll no: %d, Marks: %.2f",
    // students[i].name,students[i].rollno, students[i].marks);
    // }

    return 0;
}
