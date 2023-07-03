#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r+");



    // fgets
    char str[6];
    fgets(str,5,ptr);
    printf("this string is %s\n",str);



    // fgetc
    //  c = fgetc(ptr);
    // printf("The character I read was %c\n", c);



    // fputc
    // fputc('o',ptr);





    // fputs
    // fputs("this is paras kumar",ptr);
    fclose(ptr);

    return 0;
}
