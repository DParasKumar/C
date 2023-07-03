#include<stdio.h>
#include<string.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    // char str[] = {'P','a','r','a','s','\0'}; /first type to write string
    // char str[] ="Paras"; //second type to write string
    char str[34];
    gets(str);
    printf("using printstr: \n");
    printstr(str);
    printf("\n"); 
    printf("using printf %s\n",str);
    printf("using puts(str): \n");
    puts(str);
    return 0;
}