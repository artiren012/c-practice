//
//  4-calculation_power.c
//  c-study
//
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("정수를 입력하시오: ");
    scanf("%d", &num1);
    printf("2를 곱하고 싶은 횟수: ");
    scanf("%d", &num2);
    printf("%d<<%d의 값: %d\n", num1, num2, num1 << num2);
    return 0;
}
