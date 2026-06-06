// Use calloc to allocate an array for a set of char characters representing a sentence, ensuring all the memory is initialized to zero.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("welcome to our dynamic character");
    char *sentence = (char *)calloc(100, sizeof(char));
    if (sentence == NULL)
    {
        printf("Memory Error");
        return 1;
    }
    printf("Ensuring all elements are initialized");
    for (int i = 0; i < 100; i++)
    {
        printf("%c", sentence[i]);
    }
    printf("\n Now enter a piece of text:");
    fgets(sentence, 100, stdin);

    printf("\n here is your text: %s", sentence);
    free(sentence);
    sentence = NULL;

    return 0;
}
