#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    char s3[58] = "is a friend of";
    printf("enter the name of first user:\n");
    gets(s1);
    printf("name of first user is: %s\n", s1);
    printf("enter the name of second user:\n");
    gets(s2);
    printf("name of second user is: %s\n", s2);
    printf(strcat(s1,strcat(s3,s2)));
    return 0;
}