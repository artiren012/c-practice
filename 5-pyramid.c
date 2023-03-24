//
//  5-pyramid.c
//  c-study
//
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int stick_height, shadow_height, distance;
    printf("지팡이의 높이를 입력하시오: ");
    scanf("%d", &stick_height);
    printf("지팡이 그림자의 길이를 입력하시오: ");
    scanf("%d", &shadow_height);
    printf("피라미드 까지의 거리를 입력하시오: ");
    scanf("%d", &distance);
    printf("피라미드의 높이는 %.2f입니다.\n", (float)(distance * stick_height) / shadow_height);
}
