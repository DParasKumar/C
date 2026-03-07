#include<stdio.h>

void count_to_100();  //function 1 defined
int sum (int, int); //function 2

int main(int argc, char const *argv[])
{
    // function 1 called
    count_to_100();
    //  function 2 called
    int add = sum(4,5);
    printf(" \n the sum of 4 and 5 is %d", add);

    return 0;
}

// function 1 created
void count_to_100(){

    for (int i = 1; i <= 100; i++)
    {
        printf(" %d", i);
    }
    
}
// function 2 created
int sum (int first, int second){
    int addition = first + second;
    return addition;
}