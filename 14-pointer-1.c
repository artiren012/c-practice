//
//  14-pointer-1.c
//  c-study
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* str;
    str = (char*)malloc(20 * sizeof(char));
    if (str == NULL) {
        printf("메모리 할당 실패");
        return 1;
    }
    strcpy(str, "hangookuniv");
    
    printf("문자열 = %s, 주소 = %p\n", str, str);
    
    str = (char*)realloc(str, 30 * sizeof(char));
    if (str == NULL) {
        printf("메모리 할당 실패");
        return 1;
    }
    strcat(str, ".com");
    
    printf("문자열 = %s, 주소 = %p\n", str, str);
    
    free(str);

    return 0;
}
