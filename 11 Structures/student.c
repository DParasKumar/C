#include<stdio.h>

struct student
{
    int rollno;
    char name[10];
    float marks;
};
int main(int argc, char const *argv[])
{
    struct student student1;
    printf("Please enter student details");
    printf("\nEnter the roll no:");
    scanf("%d", &student1.rollno);
    printf("Enter the name: ");
    scanf(" %9s", student1.name);
    printf("Now Enter the marks:");
    scanf("%f", &student1.marks);

    printf("Here are the student details\n");
    printf("RollNo.: %d, Name: %s, Marks: %f", student1.rollno, student1.name, student1.marks);
    return 0;
}
