#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    // char string[34];
    // reading a file
    // ptr= fopen("myfile.txt", "r");
    // // for reading a file use fscanf
    // fscanf(ptr, "%s", string);
    // // for writing in a file use fprintf
    // printf("the content of this file has %s\n",string);

    // writing a file
    // char string[34]= "here is new line";
    // ptr=fopen("myfile.txt","w");
    // fprintf(ptr,"%s",string);
    // printf("the written content of this file is %s\n", string);
    
    // appending a file
    char string[54]= "new line from here.";
    ptr=fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);
    printf("the new line is added in the current file\n");
    return 0;


}
