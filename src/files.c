#include <unistd.h>

int fileExists(const char* fname) {
    return access( fname, F_OK ) == 0;
}