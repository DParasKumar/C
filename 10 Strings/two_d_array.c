#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name[4][20] = {"Paras", "Ram", "sonu", "Sameer"};

    for (int i = 0; i < 4; i++)
    {
        puts(name[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < strlen(name[i]); j++)
        {
            printf("%c", name[i][j]);
        }
        printf("\n"); 
    }
    
    return 0;
}
