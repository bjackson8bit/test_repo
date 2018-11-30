#include <stdio.h>
#include <string.h>
#include "helper.h"


// Dereference pointer without checking if NULL
int helper2(int* p) {
    printf("wow\n");
    return *p + 4;
}

int main(int argc, char* argv[]) {
    int num1 = 15;
    int num2 = 20;

    int* p1 = &num1;
    int* p2 = &num2;

    if (argc >= 2 && strcmp(argv[1], "wow") == 0) {
        p1 = NULL;
    }

    if (argc >= 2 && strcmp(argv[1], "test") == 0) {
        p2 = NULL;
    }

    printf("amazing\n");

    printf("num1 + 4 is %d\n", helper2(p1));
    printf("num2 - 5 is %d\n", *p2);

    int* p3 = NULL;

    return *p3;
}
