#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[] = "Paras";
    printf("Array : Before Modifying : %s\n", name);
    // puts(name);
    name[0] = 'p'; //small p instead of Capital P
    printf("Array : After Modifying : %s\n", name);
    // puts(name);

    char *nick_name[] = "Paras";
    printf("Pointer : Before Modifying : %s\n", nick_name);
    
    nick_name[0] = 'p'; //small p instead of Capital P
    printf("Pointer : After Modifying : %s\n", nick_name);
    


    return 0;
}
