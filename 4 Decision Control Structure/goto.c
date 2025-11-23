#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    input_number: 
    //label for goto
    printf("Please enter the number");
    scanf("%d", &num);

    if (num != 10)
    {
        goto input_number;
        /* code */
    }
    
    return 0;
}
