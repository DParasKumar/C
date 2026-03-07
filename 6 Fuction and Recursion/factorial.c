#include<stdio.h>

int factorial_using_loop(int);
int factorial_using_recustion(int);
int main(int argc, char const *argv[])
{
    int res = factorial_using_loop(4);
    printf("Factorial using loop : %d\n", res);
    

    int res2 = factorial_using_recustion(5);
    printf("Factorial using recustion : %d", res2);
    return 0;
}

int factorial_using_recustion(int num){
    if (num ==0)
    {
        return 1;
    }
    
    return num * factorial_using_recustion(num -1);

}



int factorial_using_loop(int num){
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *=i;
    }
    return result;
}
