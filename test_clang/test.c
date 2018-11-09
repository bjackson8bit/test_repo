#include <stdio.h>
#include "helper.h"

int helper2(int* p) {
    return *p + 4;
}

int main(int argc, char* argv[]) {
    int* p = NULL;
    printf("The number is %d\n", helper2(p));
    return 0;
}
