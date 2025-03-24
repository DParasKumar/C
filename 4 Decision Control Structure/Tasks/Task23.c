// create a program that calculates grades based on marks.
/* A->above 90%
B->above 75%
C->above 60%
D->above 30%
F->below 30%
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Please Enter your marks:\n");
    scanf("%d", &marks);

    if(marks>90)
    {
        printf("You have got A grade");
    }
    else if (marks >75)
    {
        printf("You have got B grade");
    }
    else if (marks >60)
    {
        printf("You have got C grade");
    }
    else if (marks >30)
    {
        printf("You have got D grade");
    }
    
    else
    {
        printf("You have failed the exam with F grade");
    }
    

    return 0;
}
