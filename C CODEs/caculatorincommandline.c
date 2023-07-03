#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1,num2;
    operation = argv[1 ];
    num1= atoi(argv[2]);
    num2= atoi(argv[3]);
    printf("operation %s\n",operation);
    printf("num1 %d\n",num1);
    printf("num2 %d\n",num2);
    if (strcmp(operation,"add")==0)
    {
        printf("%d\n", num1+num2);
    }
    else if (strcmp(operation,"subtract")==0)
    {
        printf("%d\n", num1-num2);
    }
    else if (strcmp(operation,"multiply")==0)
    {
        printf("%d\n", num1*num2);
    }
    else if (strcmp(operation,"divide")==0)
    {
        printf("%d\n", num1 / num2);
    }
    
    return 0;
}
