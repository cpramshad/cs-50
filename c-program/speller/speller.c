// Implements a spell-checker
#include<stdio.h>
#include "dictionary.h"

int main(int argc, char *argv[])
{
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    char* dictionary = argv[1];

    // load dictionary
    bool loaded = load(dictionary);

    printf("loaded %d", loaded);
}
