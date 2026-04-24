#include <stdio.h>
struct student
{
    int rollno;
    char name[10];
    float marks;
};

int main(int argc, char const *argv[])
{

    int a =5;
    int *ptr = &a;

    struct student student = {1, "Ram", 45.5};
    struct student *stu_ptr = &student;
    
    printf("RollNo: %d, Name:%s, Marks: %.2f", stu_ptr->rollno, stu_ptr->name, stu_ptr->marks );
    return 0;
}
