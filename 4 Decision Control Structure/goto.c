<<<<<<< HEAD
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
=======
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
>>>>>>> 013d0e217c9d130a0e261bcd3d97657869d04c02
