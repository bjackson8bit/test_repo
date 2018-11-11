#include <stdio.h>
#include <string.h>
#include "helper.h"

// Dereference pointer without checking if NULL
int helper2(int* p) {
    return *p + 4;
}

int main(int argc, char* argv[]) {
    int x = 23;
    int* p = &x;
    if (argc >= 2 && strcmp(argv[1], "test")) {
        p = NULL;
    }
    printf("The number is %d\n", helper2(p));

    int* z = NULL;
    int y = *z;

    return 0;
}
