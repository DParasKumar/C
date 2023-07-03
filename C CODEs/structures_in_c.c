#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
};
struct student harry, ravi, shubham;
int main(int argc, char const *argv[])
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;

    harry.marks = 124;
    ravi.marks = 144;
    shubham.marks = 154;

    harry.fav_char = 'a';
    ravi.fav_char = 'b';
    shubham.fav_char = 'c';

    strcpy(harry.name, "Harry rao");
    strcpy(ravi.name, "ravi rathode");
    strcpy(shubham.name, "shubham beti");

    printf("harry's id is %d\n", harry.id);
    printf("harry's marks are %d\n", harry.marks);
    printf("harry's favourite charachter is %c\n", harry.fav_char);
    printf("full name is %s", harry.name);

    printf("ravi's id is %d\n", ravi.id);
    printf("ravi's marks are %d\n", ravi.marks);
    printf("ravi's favourite charachter is %c\n", ravi.fav_char);
    printf("full name is %s", ravi.name);

    printf("shubham's id is %d\n", shubham.id);
    printf("shubham's marks are %d\n", shubham.marks);
    printf("shubham's favourite charachter is %c\n", shubham.fav_char);
    printf("full name is %s", shubham.name);
    return 0;
}
