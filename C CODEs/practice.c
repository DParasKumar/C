#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int chars, i=0;
    char *ptr;
    while (i<3)
    {
        printf("Employee : %d , enter the number of charachters in your employee Id\n",i+1);
        scanf("%d",&chars);

        ptr = (char *) malloc((chars+1) * sizeof(char));

        printf("enter your employee Id\n");
        scanf("%d",&ptr);

        printf("your employee Id is %d\n",ptr);
        i=i+1;
        free(ptr);
    }
    
    
    return 0;
}
