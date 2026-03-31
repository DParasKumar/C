#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int result = strcmp("apple", "bannana");
    printf("Comparision of apple and banna is : %d", result);

    result = strcmp("chernobyl", "bannana");
    printf("\nComparision of chernobyl and banna is : %d", result);
    return 0;
}
