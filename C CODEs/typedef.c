#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[43];

} std;
int main(int argc, char const *argv[])
{
    // struct student s1,s2;
    std s1, s2;
    s1.id = 56;
    s2.id = 34;
    printf("id of s1 is %d\n", s1.id);
    printf("id of s2 is %d\n", s2.id);
    // typedef <previous_name> <alias_name>;
    // typedef is used to give alternate name to any data type amd it itself is a keyword.
    // typedef unsigned   long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 45;
    // printf("the value of a is %d",a);
    return 0;
}
