//
//  15-pointer-2.c
//  c-study
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct course {
    char subject[30];
    double marks;
};

int main(void) {
    int n, i;
    struct course* ptr;
    
    printf("구조체의 개수: ");
    scanf("%d", &n);
    
    ptr = (struct course*)malloc(n * sizeof(struct course));
    if (ptr == NULL) {
        printf("동적 메모리 할당 실패");
        exit(1);
    }
    
    for (i = 0; i < n; i++) {
        printf("과목 이름과 성적: ");
        scanf("%s %lf", (ptr + i)->subject, &(ptr + i)->marks);
    }
    printf("\n");
    
    for (i = 0; i < n; i++) {
        printf("%s\t%.1lf\n", (ptr + i)->subject, (ptr + i)->marks);
    }
    
    free(ptr);
    
    return 0;
}
