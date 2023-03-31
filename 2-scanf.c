//
//  2-scanf.c
//  c-study
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int salary;
    printf("연봉을 입력하세요(단위: 만원): ");
    scanf("%d", &salary);
    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2f\n", 100000.0f / salary);
    return 0;
}
