//
//  9-LCM.c
//  c-study
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y, r;
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);
    int originX = x, originY = y;
    
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    printf("최소 공배수는 %d입니다.\n", (originX * originY) / x);
    
    return 0;
}
