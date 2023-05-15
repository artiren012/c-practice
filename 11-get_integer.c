//
//  11-get_integer.c
//  c-study

#include <stdio.h>

void get_int(int *x, int *y) {
    printf("두 개의 정수를 입력하시오(예: 10 20): ");
    scanf("%d %d", x, y);
}

int main(void) {
    int x, y;
    
    get_int(&x, &y);
    printf("정수의 합은 %d\n", x + y);
    
    return 0;
}
