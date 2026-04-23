#include<stdio.h>

struct student
{
    int rollno;
    char name[10];
    float marks;
};
int main(int argc, char const *argv[])
{
    //Direct initialization
    struct student s1 = {1, "Ram", 99.89};
    printf("RollNo: %d, Name: %s, Marks: %.2f", s1.rollno, s1.name,s1.marks);

    // Designated Initialization
    struct student s2 = {.name="shyam", .marks= 90,.rollno = 2};
    printf("\nRollNo: %d, Name: %s, Marks: %.2f", s2.rollno, s2.name,s2.marks);

    // Zero Initialization
    struct student s3 = {0};
    printf("\nRollNo: %d, Name: %s, Marks: %.2f", s3.rollno, s3.name,s3.marks);

    // Copy Initialization
    struct student s4 = s1;
    s4.rollno = 4;
    printf("\nRollNo: %d, Name: %s, Marks: %.2f", s4.rollno, s4.name,s4.marks);




    return 0;
}
