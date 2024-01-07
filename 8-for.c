//
//  8-for.c
//  c-study
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    for (int i = 1; i < 8; i++) {
        for (int j = 0; j < 7 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
