#include <stdio.h>

char* input(const char* prompt) {
    const char* res;

    printf(prompt);
    scanf("%s", res);

    return res;
}