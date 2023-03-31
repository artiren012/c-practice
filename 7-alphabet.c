//
//  7-alphabet.c
//  c-study
//
#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>

int main(void) {
    char c;
    printf("문자를 입력하시오: ");
    c = getchar();
    
    switch (c) {
        case 'R':
        case 'r':
            printf("Rectangle\n");
            break;
        case 'T':
        case 't':
            printf("Triangle\n");
        case 'C':
        case 'c':
            printf("Circle\n");
            break;
        default:
            printf("Unknown");
            break;
    }
    
    return 0;
}
