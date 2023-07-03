#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "Paras";
    char s2[] = "Kumar";
    char s3[58];
    // printf("the concatenation string is : %s\n", strcat(s1,s2));
    printf("the length of s1 is: %d\n ",strlen(s1));
    printf("the length of s2 is: %d\n", strlen(s2));
    printf("comparision of s1 to s2 is %d\n", strcmp(s1,s2));
    // printf("the reverse of string s1 is %s\n", strrev(s1));
    // printf("the reverse of string s2 is %s\n", strrev(s2));
    strcpy(s3,strcat(s1,s2));
    printf("the value of s3 is %s\n",s3);
    return 0;
}