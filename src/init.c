#include <stdio.h>
#include "ServiceEngine.h"

static const char* version = "1.0.0";

void init() {
    printf("ServiceEngine V%s\n\n", version);

    while (1) {
        const char* prompt = input(">> ");
        // TODO: implement parsing
    }
}