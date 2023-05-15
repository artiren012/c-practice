//
//  10-search.c
//  c-study

#include <stdio.h>

int search(int *A, int size, int search_value) {
    for (int i = 0; i < size; i++) {
        if (A[i] == search_value) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int data[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
    int index = search(data, 10, 200);
    
    printf("월급이 200만원인 사람의 인덱스=%d\n", index);
    
    return 0;
}
